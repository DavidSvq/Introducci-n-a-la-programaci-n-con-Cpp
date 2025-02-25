/*Crea un programa que lea 10 números por teclado, 5 para un array y 5
para otro array distinto. Mostrar todos por pantalla*/

#include <iostream>
using namespace std;
int main(){
    int array1[5], array2[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Introduce un numero: ";
        cin >> array1[i];
        cout << "Introduce un numero: ";
        cin >> array2[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << array1[i] << " " << array2[i] << " ";
    }
    return 0;
}