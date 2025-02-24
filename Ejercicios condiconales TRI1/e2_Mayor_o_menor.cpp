//Crea un programa que solicite la edad y luego evalúa si es mayor de
// edad o menor.

#include <iostream>
using namespace std;
int main(){
    int edad;
    cout << "Introduce la edad: ";
    cin >> edad;
    if (edad>=18)
    {
        cout << "Eres mayor de edad.";
    }
    else
    {
        if (edad>=0)
        {
            cout << "Eres menor de edad.";
        }
        else
        {
            cout << "Lo mismo ni has nacido, pusiste una edad negativa";
        } 
    }
    return 0;
}