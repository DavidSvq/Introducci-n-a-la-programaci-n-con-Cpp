// Desarrolla una aplicación que solicite introducir 8 valores CHAR y los concatena
// para crear un string. [No me creéis 8 variables CHAR]

#include <iostream>
using namespace std;
int main(){
    char letra;
    string palabra;
    int contador = 8;
    //BUCLE FOR PARA SOLICITAR 8 LETRAS.
    for (int l = 0; l < contador; l++)
    {
        cout << "Introduce una letra: " << endl;
        cin >> letra;
        palabra=palabra + letra;//SE SUMA CADA LETRA PARA FORMAR LA PALABRA.   
    }
    cout << palabra;
    cout << endl << "Programa finalizado.";
    return 0; 
}
