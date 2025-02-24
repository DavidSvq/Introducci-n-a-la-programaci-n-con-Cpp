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
    int longitud = texto.length();
    for (int t = 0; t < longitud; t++)
    {
        //cout << t << endl; Usado como prueba para comprobar el bucle.
        if (texto[t]==letra)
        {
            contador++;
        }    
    }
    //cout << texto.length() << endl; Usado como prueba para comprobar la longitud.
    cout << "La letra " << letra << " se repite " << contador << " veces.";
    cout << endl << "Programa finalizado.";
    return 0;
}