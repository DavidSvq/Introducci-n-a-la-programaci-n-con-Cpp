/*Crea un programa que genere aleatoriamente una matriz de 3x2 y
calcule su traspuesta*/

#include <iostream>
#include <ctime>
using namespace std;
int main(){
int matriz[3][2];
srand(time(NULL));
for (int fila = 0; fila < 3; fila++)
{
    for (int columna = 0; columna < 2; columna++)
    {
        matriz[fila][columna] = 1 + rand() % 50;
    }  
}
for (int fila = 0; fila < 3; fila++)
{
    for (int columna = 0; columna < 2; columna++)
    {
        cout << matriz[fila][columna] << " ";
    }
    cout << endl;
}
cout << endl;
for (int columna = 0; columna < 2; columna++)
{
    for (int fila = 0; fila < 3; fila++)
    {
        cout << matriz[fila][columna] << " ";
    }
    cout << endl;
}
return 0;
}


