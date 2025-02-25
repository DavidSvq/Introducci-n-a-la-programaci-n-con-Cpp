/*Hacer que cuando se muestre el array y con los 20 numeros aleatorios se haga de mayor 
a menor. Ademas para comprobar la complejidad añadimos un contador para ver el número de 
vueltas que realiza el doble bucle.*/

#include <iostream>
#include <ctime>
void ordenar_array(int array[]);
using namespace std;
int main(){
    int ordenar_array[20];
    return 0;
}
void ordenar_array(int array[]){
    int auxiliar_cambio;
    int numero_vueltas = 0;
    srand(time(NULL));
    for (int i=0; i < 20; i++){
        array[i] = 1 + rand() % 50;
    }
    for (int i = 0; i < 20; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 20; i++)
    {
        for (int j = i + 1 ; j < 20; j++)
        {
            if(array[j] < array[i]){
                auxiliar_cambio = array[j];
                array[j] = array[i];
                array[i] = auxiliar_cambio;   
            }
            numero_vueltas ++;
        }
    }
    for (int i = 0; i < 20; i++)
        {
        cout << array[i] << " ";
        }
    cout << endl << "El numero de vueltas es: " << numero_vueltas;
}

