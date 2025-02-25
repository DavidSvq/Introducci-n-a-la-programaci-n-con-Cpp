/*Crea un programa que me pida rellenar una matriz y compruebe si es la
matriz identidad.*/

#include <iostream>
using namespace std;
int main(){
    int numero_filas_columnas;
    int contador_ceros = 0;
    bool esIdentidad = false;
    cout << "Introduce el lado para la matriz: ";
    cin >> numero_filas_columnas;
    int matriz[numero_filas_columnas][numero_filas_columnas];
    for (int fila = 0; fila < numero_filas_columnas; fila++)
    {
        for (int columna = 0; columna < numero_filas_columnas; columna++)
        {
            cout << "Introduce 0 o 1: ";
            cin >> matriz[fila][columna];
        }  
    }
    for (int fila = 0; fila < numero_filas_columnas; fila++)
    {
        for (int columna = 0; columna < numero_filas_columnas; columna++)
        {
            cout << matriz[fila][columna] << " ";
        }
        cout << endl;  
    }
    int diagonal = 0;
    int contador_unos = 0;
    do
    {
        if (matriz[diagonal][diagonal] == 1)
        {
            contador_unos++;
        }
        diagonal++;
        
    } while (numero_filas_columnas >= diagonal);
    if (contador_unos == numero_filas_columnas)
    {
        esIdentidad = true;
    }
    
    for (int fila = 0; fila < numero_filas_columnas; fila++)
    {
        for (int columna = 0; columna < numero_filas_columnas; columna++)
        {
            /*if (matriz[0][0] == 1 && matriz[1][1] == 1 && matriz[2][2] == 1)
            {
                esIdentidad = true;
            }*/
            if (matriz[fila][columna] == 0)
            {
                contador_ceros++;
            }  
        }  
    }
    if (contador_ceros < numero_filas_columnas * numero_filas_columnas - numero_filas_columnas)
    {
        esIdentidad = false;
    }
    if (esIdentidad == true)
    {
        cout << "Es una matriz identidad.";
    }
    else
    {
        cout << "No es una matriz identidad.";
    }
    return 0;
}