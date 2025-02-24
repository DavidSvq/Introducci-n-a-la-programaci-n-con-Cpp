//Desarrollar un programa que pide tres números enteros y luego evalúa 
// si la multiplicación de los dos primeros es igual al tercero.

#include <iostream>
using namespace std;
int main(){
    int n1, n2, n3;
    cout << "Introduce 3 numeros: " << endl;
    cin >> n1 >> n2 >> n3;
    if (n1*n2==n3)
    {
        cout << "El primer numero x el segundo es igual al tercero.";
    }
    else
    {
        cout << "No se da la condición: El primer numero x el segundo NO es igual al tercero.";
    }
}
