/*Desarrolla un programa que almacene 5 valores de un array de enteros,
introducidos por teclado y calcular cuál es la distancia que les separa al número
mayor del menor.*/
#include <iostream>
using namespace std;
int numero[5];
int num_mayor = 0;
int num_menor = 0;
int distancia = 0;
int main(){
for (int i = 0; i < 5; i++)
{
    cout << "Introduce el numero " << i + 1 << ": ";
    cin >> numero[i];
}
num_mayor = numero[0];
num_menor = numero[0];
for (int i = 1; i < 5; i++)
{
    if (num_mayor < numero [i]){
        num_mayor = numero[i];
    }
    if (num_menor > numero[i]){
        num_menor = numero[i];
    }
}
cout << "El numero " << num_mayor << " es el mayor." << endl;
cout << "El numero " << num_menor << " es el menor." << endl;
distancia = num_mayor - num_menor;
cout << "La distancia entre numeros es " << distancia;
return 0;
}