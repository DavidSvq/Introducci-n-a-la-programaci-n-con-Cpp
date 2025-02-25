#include <iostream>
#include <ctime>
using namespace std;
int main(){
    int num_entero[10];
    int contador[50] = {0};
    float suma = 0;
    float media = 0;
    int num_minimo, num_maximo;
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        num_entero[i] = 1 + rand() % 10;
        cout << num_entero[i] << " ";
        suma += num_entero[i];
    }
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        contador[num_entero[i] - 1]++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (contador[i] > 0)
        {
            cout << "El " << i +1  << " aparece " << contador[i] << " veces." << endl;
        }
    }
        num_minimo = num_entero[0];
        num_maximo = num_entero[0];
    for (int i = 0; i < 10; i++)
    {
        if (num_entero[i] < num_minimo)
        {
            num_minimo = num_entero[i];
        }
        if (num_entero[i] > num_maximo)
        {
            num_maximo = num_entero[i];
        }
    }
    
    media= suma / 10;
    cout << "La suma es " << suma << endl;
    cout << "La media es " << media << endl;
    cout << "El numero mayor es " << num_maximo << endl;
    cout << "El numero menor es " << num_minimo << endl;
    return 0;
}