//Crear un programa que pide un número y luego evalúa si dicho número 
// es par o impar. Si es par imprima “Hola soy” [el numero que le hayas 
// metido] “ y soy par”. Si es impar que imprima “Hola soy” [el numero 
// que le hayas metido] “ y soy impar.

#include <iostream>
using namespace std;
int main(){
    int numero;
    cout << "Introduce un numero: ";
    cin >> numero;
    if (numero%2==0)
    {
        cout << "Hola soy el " << numero << " y soy par.";
    }
    else
    {
        cout << "Hola soy el " << numero << " y soy impar.";
    }
    return 0;
}
