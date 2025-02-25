/*Escriba un programa que pida una cadena de texto, la invierta y la
imprima en la pantalla.*/

#include <iostream>
using namespace std;
int main(){
    string texto;
    cout << "Introduce un texto: ";
    getline(cin, texto);
    cout << endl << texto << endl;
    for (int i = texto.length()-1; i >= 0; i--)
    {
        cout << texto[i];
    }
    return 0;
}