#include <bits/stdc++.h>
using namespace std;
int main(){
    float numero, numero2, promedio;
    cout << "Introduce el numero 1º: " << endl;
    cin >> numero;
    cout << "Introduce el 2º numero: " << endl;
    cin >> numero2;
    promedio = (numero+numero2) / 2;
    if (promedio>=0 && promedio <= 5)
    {
        cout << "El promedio es " << promedio << ". Categoria Alfa." << endl;
    }
    if (promedio>5 && promedio <= 10)
    {
        cout << "El promedio es " << promedio <<". Categoria Beta." << endl;
    }
    if (promedio>10 && promedio <= 13)
    {
        cout << "El promedio es " << promedio <<". Categoria Gama." << endl;
    }
    if (promedio>13 && promedio <= 16)
    {
        cout << "El promedio es " << promedio <<". Categoria Delta." << endl;
    }
    if (promedio>16 && promedio <= 20)
    {
        cout << "El promedio es " << promedio <<". Categoria Epsilon." << endl;
    }
}