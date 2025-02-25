/*Cazar al espía, Crea una matriz
de 7x7 rellena de ‘#’ donde sólo una casilla es una ‘O’. Deberá mostrarse 2
seg, y después preguntar por la posición al jugador (fila y columna), que
deberá acertar las coordenadas de donde estaba ubicada la ‘O’.
Para que algo se muestre 2
segundos usamos la librería Windows.h y el comando Sleep(2000)
Haz un menú con opciones y niveles de dificultad*/

#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;
int main(){
    int posicionX;
    int posicionY;
    int posicionXusuario;
    int posicionYusuario;
    string matriz[8][8];
    cout << "  ";
    for (int i = 1; i < 8; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    for (int fila = 1; fila < 8; fila++)
    {
        for (int columna = 1; columna < 8; columna++)
        {
            matriz[fila][columna] = "#";
        }
    }
    srand(time(NULL));
    posicionX = rand() % 7;
    posicionY = rand() % 7;
    matriz[posicionX][posicionY] = {"O"};
    for (int fila = 1; fila < 8; fila++)
    {
        cout << fila << " ";
        for (int columna = 1; columna < 8; columna++)
        {
            cout << matriz[fila][columna] << " ";
        }
        cout << endl;
    }
    //Sleep(3000);
    //system("cls");
    cout << "Introduce la ubicacion en X: ";
    cin >> posicionXusuario;
    cout << "Introduce la ubicacion en Y: ";
    cin >> posicionYusuario;
    if (posicionX == posicionXusuario && posicionY == posicionYusuario)
    {
        cout << "Has acertado.";
    }
    else{
        cout << "Sigue intentandolo.";
    }
    return 0;
}

