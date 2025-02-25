/*Cree un programa que genere una matriz con las filas y columnas que
teclee, y rellénela*/

#include <iostream>
using namespace std;
int main(){
    int num_filas, num_columnas;
    cout << "Introduce el numero de filas deseadas: ";
    cin >> num_filas;
    cout << "Introduce el numero de columnas deseadas: ";
    cin >> num_columnas;
    int matriz[num_filas][num_columnas];
    for (int i = 0; i < num_filas; i++)
    {
        for (int j = 0; j < num_columnas; j++)
        {
            cout << "Introduce la fila [" << i << "] columna [" << j << "]: ";
            cin >> matriz[i][j];
        }   
    }
    return 0;
}