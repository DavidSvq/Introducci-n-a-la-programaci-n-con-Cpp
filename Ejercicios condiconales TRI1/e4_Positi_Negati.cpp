//Crear un programa que pide y luego evalúa si dicho número es positivo,
// negativo o neutro. Y después diga si es par o impar.

#include <iostream>
using namespace std;
int main(){
    int numero;
    cout << "Introduce un numero: ";
    cin >> numero;
    if (numero==0)
    {
        cout << "Es 0 neutro.";
    }
    else if (numero<0)
    {
        if (numero%2==0)
        {
            cout << "Hola soy el " << numero << " soy par y negativo.";
        }
        else
        {
            cout << "Hola soy el " << numero << "  soy impar y negativo.";
        }
    }
    else if (numero>0)
    {
        if (numero%2==0)
        {
            cout << "Hola soy el " << numero << " soy par y positivo.";
        }
        else
        {
            cout << "Hola soy el " << numero << "  soy impar y positivo.";
        }
    }
    return 0;
}