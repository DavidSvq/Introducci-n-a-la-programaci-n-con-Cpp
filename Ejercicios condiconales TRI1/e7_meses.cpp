//Programa que pida un número del 1 al 12 y diga el nombre del mes correspondiente.

#include <iostream>
using namespace std;
int main(){
    int numero;
    numero=0;
    cout << "Introduce un numero del 1 al 12:" << endl;
    cin >> numero;
    switch (numero)
    {
         case 1:
        cout << "Enero";
        break;
    case 2:
        cout << "Febrero.";
        break;
    case 3:
        cout << "Marzo.";
        break;
    case 4:
        cout << "Abril.";
        break;
    case 5:
        cout << "Mayo.";
        break;
    case 6:
        cout << "Junio.";
        break;
    case 7:
        cout << "Julio.";
        break;
    case 8:
        cout << "Agosto.";
        break;
    case 9:
        cout << "Septtiembre.";
        break;
    case 10:
        cout << "Octubre.";
        break;
    case 11:
        cout << "Noviembre.";
        break;
    case 12:
        cout << "Diciembre.";
        break;
    
    default:
        cout << "No eligio entre el 1 y el 12.";
        break;
    }
    return 0;
}