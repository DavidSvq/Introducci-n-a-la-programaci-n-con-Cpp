/*Escribe un programa que genere dos arrays de 50 números random (del 1 al 9)
y diga cual es el número que más se repite y cuantas veces lo hace en cada array*/

#include <iostream>
#include <ctime>
using namespace std;
int main(){
    int arrayA[50], arrayB[50], contador_aleatorios[9] = {0}, contadorA[9] = {0};
    int contador_max = 0, num_contador_max = 0;
    int contador_maxA = 0, num_contador_maxA = 0;
    srand(time(NULL));
    for (int i = 0; i < 50; i++)
    {
        arrayA[i] = 1 + rand()% 9;
        arrayB[i] = 1 + rand()% 9;
    }
    for (int i = 0; i < 50; i++)
    {
        contador_aleatorios[arrayA[i] - 1]++;
        contador_aleatorios[arrayB[i] - 1]++;
        contadorA[arrayA[i] -1] ++;
    }
    cout << "ArrayA" << endl;
    for (int i = 0; i < 50; i++)
    {
        cout << arrayA[i] << " ";
    }
    cout << endl << "ArrayB" << endl;
    for (int i = 0; i < 50; i++)
    {
        cout << arrayB[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 9; i++)
    {
        if (contador_aleatorios[i] > contador_max)
        {
            contador_max = contador_aleatorios[i];
            num_contador_max = i + 1;
        }
        if (contadorA[i] > contador_maxA)
        {
            contador_maxA = contadorA[i];
            num_contador_maxA = i + 1;
            if (arrayA[i] == num_contador_maxA)
            {
                contador_maxA++;
            }
        } 
    }
    cout << "El numero " << num_contador_max << " se repite mas veces: " << contador_max << " en total." << endl;
    cout << "En el arrayA el numero " << num_contador_max << " se repite mas veces: " << contador_maxA << " en total." << endl;
    cout << "En el arrayB el numero " << num_contador_max << " se repite mas veces: " << contador_max - contador_maxA << " en total." << endl; 
    return 0;
}
