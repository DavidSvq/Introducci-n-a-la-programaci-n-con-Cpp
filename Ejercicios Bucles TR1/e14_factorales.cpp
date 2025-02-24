//Leer por teclado un número entero N no negativo y mostrar el factorial de
// todos los números desde 0 hasta N.

#include <iostream>
using namespace std;
int main(){
    int N;
    long long factorial = 1;
    cout << "Introduce un numero: ";
    cin >> N;
    if (N<=0)//CONDICIONAL POR PARA 0 Y NUMEROS NEGATIVOS --> FINALIZAR PROGRAMA.
    {
        cout << "No se puede calcular. Programa finalizado.";
    }
    //SINO EJECUTAR PROGRAMA.
    else{
        for (int i = N; i > 0; i--)//BUCLE PARA CADA NUMERO DE N A 0.
        {
            for (int i = 1; i <= N; i++)//BUCLE PARA CALCULAR EL FACTORIAL
            {
                factorial*=i;
            }
        cout << "El factorial de " << N << " es " << factorial << endl;
        N--;//DECREMENTO DE N HASTA LLEGAR A 0.
        factorial=1;//REESTABLECER EN 1 PARA LA SIGUIENTE VUELTA.
        }
        cout << "El factorial de 0 es 0" << endl;   
    }
    cout << endl << "Programa finalizado.";
    return 0; 
}