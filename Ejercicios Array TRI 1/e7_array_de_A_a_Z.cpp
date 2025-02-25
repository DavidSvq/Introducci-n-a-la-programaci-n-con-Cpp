/*Desarrolla un programa que rellene un array de caracteres que contenga
de la ‘A’ a la ‘Z’. Después, ve pidiendo posiciones del array por teclado y si la
posición es correcta o no, hasta que se inserte el -1 que cerrará el programa.

Por ejemplo, si escribo los siguientes números
0 -> ‘A’
5 -> ‘F’
25 -> ‘Z’
50 -> Error, inserte otro número
-1 -> Fin*/

#include <iostream>
using namespace std;
int main(){
    int posicion;
    char ABC[26];
    for (int i = 0; i < 26; i++)
    {
        ABC[i] = 'A' + i;
        //cout << ABC[i] << " ";
    }
    //cout << endl;
    do
    {
        cout << "Pulsa -1 para salir." << endl;
        cout << "Introduce la posicion a consultar ";
        cin >> posicion;
        if (posicion == -1)
        {
            cout << "Programa finalizado.";
        }
        else
        {
            if (posicion >= 0 && posicion <=25)
            {
                cout << "La posicion " << posicion << " contiene la letra " << ABC[posicion] << endl;
            }
            else 
            {
                cout << "Error, introduce otra posicion." << endl;
            }
        }   
    } while (posicion != -1);
    return 0;    
}

