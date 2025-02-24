//Desarrolla un programa en el que introduzcas una palabra y te diga cuantas
//letras la componen. [investiga la propiedad .size()]

#include <iostream>
using namespace std;
int main(){
    string palabra;
    int longitud = 0;
    cout << "Introduce una palabra: " << endl;
    cin >> palabra;
    longitud = palabra.size();
    cout << "Tiene " << longitud << " letras." << endl;
    cout << endl << "Programa finalizado.";
    return 0;
}