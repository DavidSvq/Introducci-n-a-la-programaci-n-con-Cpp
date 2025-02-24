//16. Desarrolla un programa que imprima una pirámide de números consecutivos,
//de la siguiente forma:
//1
//121
//12321
//1234321
//123454321

#include <iostream>
using namespace std;
int main(){
    int numero, contador = 0;
    cout << "Introduce un numero: ";
    cin >> numero;
    while (contador<numero) //BUCLE WHILE PARA CONTROLAR EL TAMAÑO DE LA PIRAMIDE.
    {
        //BUCLE FOR PARA DAR POR PANTALLA EL INCREMENTO DEL NUMERO EMPEZANDO DESDE EL UNO (DESECHAMOS EL CERO)
        for (int i = 1; i <= (contador+1); i++)
        {
            cout << i;   
        }
        //BUCLE FOR PARA DAR POR PANTALLA EL DECREMENTO DEL NUMERO.
        for (int i = (contador); i > 0; i--)
        {
            cout << i;
        }
        contador+=1;//AUMENTO EN 1 DE CONTADOR POR CADA VUELTA DEL BUCLE.
        cout << endl;
    }
    cout << endl << "Programa finalizado.";   
    return 0;
}