//Desarrolla un programa que dada una cadena de caracteres te la imprima al
// contrario. (No se podrá usar ninguna función que te lo haga automáticamente).

#include <iostream>
using namespace std;
int main(){
    string palabras;
    cout << "Introduce: ";
    getline (cin,palabras);
    int longitud = palabras.length(); //USO LA LONGITUD DE LA PALABRA PARA PODER RECORRERLA CON EL BUCLE FOR.
    //BUCLE FOR PARA RECORRER LA PALABRA, COMO LA QUEREMOS AL REVES, IRA DE MAS A MENOS.
    for (int i = longitud; i >= 0; i--)
    {
        cout << palabras[i];//MUESTRA POR PANTALLA LA VARIABLE I (CADA LETRA DE LA PALABRA INTRODUCIDA)
    }
    cout << endl << "Programa finalizado.";
    return 0;
}