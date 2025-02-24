//Pedir un número por pantalla (un número menor que 10) y visualizar por
// pantalla su tabla de multiplicar.

#include <iostream>
using namespace std;
int main(){
    int numero, multiplicacion=0;
    //BUCLE DO WHILE PARA CONTROLAR QUE LA ENTRADA SEA EL RANGO NECESARIO, DEL 1 AL 9.
    do
    {
        cout << "Introduce un numero del 1 al 10 para ver su tabla de multiplicacion:";
        cin >> numero;
    } while (numero<0 || numero>9);
    //SWITCH PARA CADA CADA TABLA DEL 1 AL 9
    switch (numero)
    {
    case 0:
        cout << "El rersultado es 0";
        break;
    case 1:
        for (int i = 1; i <= 10; i++)
        {
            multiplicacion=numero*i;
            cout << "\t" << numero <<"x"<< i<< "=" << multiplicacion <<  endl;
        }
        break;
    case 2:
        for (int i = 1; i <= 10; i++)
        {
            multiplicacion=numero*i;
            cout << "\t" << numero <<"x"<< i<< "=" << multiplicacion <<  endl;
        }
        break;
    case 3:
        for (int i = 1; i <= 10; i++)
        {
            multiplicacion=numero*i;
            cout << "\t" << numero <<"x"<< i<< "=" << multiplicacion <<  endl;
        }
        break;
    case 4:
        for (int i = 1; i <= 10; i++)
        {
            multiplicacion=numero*i;
            cout << "\t" << numero <<"x"<< i<< "=" << multiplicacion <<  endl;
        }
        break;
    case 5:
        for (int i = 1; i <= 10; i++)
        {
            multiplicacion=numero*i;
            cout << "\t" << numero <<"x"<< i<< "=" << multiplicacion <<  endl;
        }
        break;
    case 6:
        for (int i = 1; i <= 10; i++)
        {
            multiplicacion=numero*i;
            cout << "\t" << numero <<"x"<< i<< "=" << multiplicacion <<  endl;
        }
        break;
    case 7:
        for (int i = 1; i <= 10; i++)
        {
            multiplicacion=numero*i;
            cout << "\t" << numero <<"x"<< i<< "=" << multiplicacion <<  endl;
        }
        break;
    case 8:
        for (int i = 1; i <= 10; i++)
        {
            multiplicacion=numero*i;
            cout << "\t" << numero <<"x"<< i<< "=" << multiplicacion <<  endl;
        }
        break;
    case 9:
        for (int i = 1; i <= 10; i++)
        {
            multiplicacion=numero*i;
            cout << "\t" << numero <<"x"<< i<< "=" << multiplicacion <<  endl;
        }
        break;
    default:
        break;
    }
    cout << endl << "Programa finalizado.";
    return 0;    
}