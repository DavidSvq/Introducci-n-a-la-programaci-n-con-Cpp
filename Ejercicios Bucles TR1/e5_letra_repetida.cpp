//Desarrolla el código de una aplicación que pida una cadena y un carácter por
// teclado y muestra cuántas veces aparece un carácter concreto en la cadena.

#include <bits/stdc++.h>
using namespace std;
int main(){
    string texto;
    char letra;
    int contador = 0;
    cout << "Introduce un texto: " << endl;
    getline(cin, texto);// getline para leer una línea, más de una palabra.
    cout << "Introduce la letra que quieres contar: " << endl;
    cin >> letra;
    
    for (char t : texto) //La variable t del tipo char : contendra toda la cadena de caracteres (palabras) 
    {                    // de la varibale texto.
        if (t==letra)// Si cada vez que una de las letras del texto sea igual a la indicada por teclado, 
        {            //  aumentará el contador en 1.
            contador++;
        }
    }
    cout << "La letra " << letra << " se repite " << contador << " veces.";
}