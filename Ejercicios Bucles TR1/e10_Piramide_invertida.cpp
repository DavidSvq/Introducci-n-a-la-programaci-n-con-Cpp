//Algoritmo que lea un número entero (altura) y a partir de él cree una escalera
// invertida de asteriscos con esa altura. Deberá quedar así, si ponemos una altura
// de 5.
// *****
// ****
// ***
// **
// *

#include <iostream>
using namespace std;
int main(){
    int numero;
    cout << "Introduce un numero:" << endl;
    cin >> numero; 
    // BUCLE FOR PARA LA ALTURA DE LA PIRAMIDE.
    for (int i = numero; i > 0; i--)
    {
        //BUCLE FOR PARA EL ANCHO DE LA PIRAMIDE.
        for (int i = 0; i < numero; i++)
        {
            cout << "*";
        }
        numero=numero-1; //DECREMENTO DE LA ALTURA.
        cout << endl;
    }
    if (numero<=0)
    {
        cout << "Programa finalizado.";
    }
     
    return 0;
}