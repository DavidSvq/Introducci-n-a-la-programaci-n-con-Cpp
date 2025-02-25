/*Cree un programa que me pida los números para rellenar una matriz de
3x2*/

#include <iostream>
using namespace std;
int main(){
    int matriz[3][2];//Primer [] para las filas, segundos [] para las columnas.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Introduce el elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matriz[i][j] << " ";
        }  
    } 
    return 0;
}