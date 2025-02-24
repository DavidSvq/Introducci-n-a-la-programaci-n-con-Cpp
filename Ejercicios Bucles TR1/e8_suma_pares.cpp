//Crea un programa que imprime en pantalla tantos números pares como se le
// indique desde el teclado, empezando por el número 2, y finalmente los sume
// todos.

#include <iostream>
using namespace std;
int main(){
    int numeroPar = 0, numero_veces, suma = 0;
    cout << "Introduce el numero de veces: ";
    cin >> numero_veces;
    for (int i = 0; i < numero_veces; i++)
    {
        numeroPar+=2;
        cout << numeroPar << "\t";
        suma+=numeroPar; 
    }
    cout << endl;
    cout << "La suma total es " << suma;
    cout << endl << "Programa finalizado.";
    return 0;
}