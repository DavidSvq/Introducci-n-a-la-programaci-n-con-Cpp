//Desarrolla un programa que imprime en pantalla tantos números impares
// como se le indique desde el teclado, empezando por el número 11.

#include <iostream>
using namespace std;
int main(){
    int numero_veces, numero = 11;
    cout << "Introduce el numero de secuencias: ";
    cin >> numero_veces;
    for (int i = 0; i < numero_veces; i++)
    {
        cout << numero << endl;
        numero+=2;
    }
    cout << endl << "Programa finalizado.";
    return 0;
}