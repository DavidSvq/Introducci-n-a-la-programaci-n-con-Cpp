//Desarrolla un programa que permita introducir una palabra y el programa
// invierta el orden de las letras de la palabra.

#include <iostream>
using namespace std;
int main(){
    string palabra;
    cout << "Introduce: ";
    cin >> palabra;
    int longitud = palabra.length(); //USO LA LONGITUD DE LA PALABRA PARA PODER RECORRERLA CON EL BUCLE FOR.
    //BUCLE FOR PARA RECORRER LA PALABRA, COMO LA QUEREMOS AL REVES, IRA DE MAS A MENOS.
    for (int i = longitud; i >= 0; i--)
    {
        cout << palabra[i];//MUESTRA POR PANTALLA LA VARIABLE I (CADA LETRA DE LA PALABRA INTRODUCIDA)
    }
    cout << endl << "Programa finalizado.";
    return 0;
}