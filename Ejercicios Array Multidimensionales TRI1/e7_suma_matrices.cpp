/*Crea un programa que permita sumar matrices (sólo si se pueden
sumar) Nota para que se puedan sumar 2 matrices deben tener el mismo 
tamaño(filas y columnas)*/

#include <iostream>
using namespace std;
int main(){
    /*ESTABLECER POR TECLADO LAS DIMENSIONES DE LAS MATRICES*/
    int num_filaM1, num_columnaM1;
    cout << "Introduce el numero de filas de la 1ª Matriz:";
    cin >> num_filaM1;
    cout << "Introduce el numero de columnas de la 1ª Matriz:";
    cin >> num_columnaM1;
    int matriz1[num_filaM1][num_columnaM1];
    int suma[num_filaM1][num_columnaM1] = {0};
    int num_filaM2, num_columnaM2;
    cout << "Introduce el numero de filas de la 2ª Matriz:";
    cin >> num_filaM2;
    cout << "Introduce el numero de columnas de la 2ª Matriz:";
    cin >> num_columnaM2;
    int matriz2[num_filaM2][num_columnaM2];
    /*###########################################################*/
    /*CONFIRMACIÓN SI SE PUEDEN SUMAR.
    DE SER SI. SOLICITUD POR TECLADO DE LOS VALORES Y LA SUMA*/
    if (num_filaM1 == num_filaM2 && num_columnaM1==num_columnaM2)
    {
        cout << "Tienes que introducir " << num_filaM1*num_columnaM1 << " numeros para la primera Matriz." << endl;
        for (int fila = 0; fila < num_filaM1; fila++)
        {
            for (int columnas = 0; columnas < num_columnaM1; columnas++)
            {
                cout << "Introduce los numeros de la primera matriz: ";
                cin >> matriz1[fila][columnas];
            }
            
        }
        cout << "Tienes que introducir otros " << num_filaM1*num_columnaM1 << " numeros para la segunda Matriz." << endl;
        for (int fila = 0; fila < num_filaM2; fila++)
        {
            for (int columnas = 0; columnas < num_columnaM2; columnas++)
            {
                cout << "Introduce los numeros de la segunda matriz: ";
                cin >> matriz2[fila][columnas];
            }
            
        }
        for (int fila = 0; fila < num_filaM1; fila++)
        {
            for (int columnas = 0; columnas < num_columnaM1; columnas++)
            {
                suma[fila][columnas] =  matriz1[fila][columnas] + matriz2[fila][columnas] ;
            }
            
        } 
        /*##########################################################################*/
        /*MOSTRAR POR PANTALLA*/
        cout << "Primera Matriz: " << endl;
        for (int fila = 0; fila < num_filaM1; fila++)
        {
            for (int columnas = 0; columnas < num_columnaM1; columnas++)
            {
                cout << matriz1[fila][columnas];
            }
            cout << endl;
        }
        cout << "Segunda Matriz: " << endl; 
        for (int fila = 0; fila < num_filaM2; fila++)
        {
            for (int columnas = 0; columnas < num_columnaM2; columnas++)
            {
                cout << matriz2[fila][columnas] ;
            }
            cout << endl;
        }
        cout << "La suma: " << endl;
        for (int fila = 0; fila < num_filaM1; fila++)
        {
            for (int columnas = 0; columnas < num_columnaM1; columnas++)
            {
                cout << suma[fila][columnas];
            }
            cout << endl;
        }
    }
    else{
        cout << "No se puede realizar la suma, para sumar 2 matrices estas deben ser de igual dimension.";
    }
    return 0;
}
