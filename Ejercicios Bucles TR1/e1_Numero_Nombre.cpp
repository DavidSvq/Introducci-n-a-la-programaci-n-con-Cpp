//Introducir un número por teclado y tu nombre y mostrar tu nombre por
//pantalla tantas veces como indique dicho número.

#include <iostream>
using namespace std;
int main(){
    int numero;
    string nombre;
    cout << "Introduce el Nombre" << endl;
    cin >> nombre;
    cout << "Numero de veces que se repita" << endl;
    cin >> numero;
    do
    {
        cout << nombre << endl;
        numero=numero-1;
    } while (numero!=0);
    return 0;
}