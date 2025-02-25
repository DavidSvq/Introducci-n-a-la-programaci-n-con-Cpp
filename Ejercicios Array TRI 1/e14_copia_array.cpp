/*Escribir un programa que llene un array con cinco números enteros
consecutivos y haga una copia de ese array en otro nuevo.*/

#include <iostream>
using namespace std;
int main(){
int enteros_consecutivos[5], copia_enteros[5], num_usuario;
    cout << "Introduce un numero del que obtener sus 4 numeros siguientes: ";
    cin >> num_usuario;
    enteros_consecutivos[0] = {num_usuario};
    for (int i = 1; i < 5; i++)
    {
        enteros_consecutivos[i] = enteros_consecutivos[i-1] + 1;
    }
    for (int i = 0; i < 5; i++)
    {
        copia_enteros[i] = enteros_consecutivos[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << copia_enteros[i] << " ";
    }
    return 0;
}