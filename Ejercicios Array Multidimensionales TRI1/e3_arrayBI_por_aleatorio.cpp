/*Cree un programa que genere una matriz con las filas y columnas que
teclee y rellénala con aleatorios*/

#include <iostream>
#include <ctime>
using namespace std;
int main(){
    int num_filas, num_columnas;
    srand(time(NULL));
    cout << "Introduce el numero de filas deseadas: ";
    cin >> num_filas;
    cout << "Introduce el numero de columnas deseadas: ";
    cin >> num_columnas;
    int matriz[num_filas][num_columnas];
    for (int i = 0; i < num_filas; i++)
    {
        for (int j = 0; j < num_columnas; j++)
        {
            matriz[i][j] = rand()% 1000;
        }   
    }
    for (int i = 0; i < num_filas; i++)
    {
        for (int j = 0; j < num_columnas; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;  
    }
    return 0;
}