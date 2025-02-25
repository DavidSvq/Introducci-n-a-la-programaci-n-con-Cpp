/*Crea un programa que permita multiplicar matrices (sólo si se pueden
multiplicar)
NOTA: PARA QUE 2 MATRICES SE PUEDAN MULTIPLICAR LA COLUMNA DE LA PRIMERA MATRIZ
DEBE SER IGUAL A LA FILA DE LA SEGUNDA MATRIZ. EL RESULTADO SERA UNA MATRIZ CON
LAS FILAS DE LA PRIMERA MATRIZ Y LA COLUMNAS DE LA SEGUNDA MATRIZ*/

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
    int num_filaM2, num_columnaM2;
    cout << "Introduce el numero de filas de la 2ª Matriz:";
    cin >> num_filaM2;
    cout << "Introduce el numero de columnas de la 2ª Matriz:";
    cin >> num_columnaM2;
    int matriz2[num_filaM2][num_columnaM2];
    int multiplicar[num_filaM1][num_columnaM2] = {1};
    int matriz3[num_filaM1][num_columnaM2]; // = {0};
    /*###########################################################*/
    /*DAR LOS VALORES A LAS MATRICES (PARA EL SI)*/
    if (num_columnaM1 == num_filaM2)
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
        cout << "Tienes que introducir otros " << num_filaM2*num_columnaM2 << " numeros para la segunda Matriz." << endl;
        for (int fila = 0; fila < num_filaM2; fila++)
        {
            for (int columnas = 0; columnas < num_columnaM2; columnas++)
            {

                cout << "Introduce los numeros de la segunda matriz: ";
                cin >> matriz2[fila][columnas];
            }
            
        }
        /*######################################################################################*/
        /*REALIZAR LA MULTIPLICACION Y GUARDAR EN UNA 3ª MATRIZ*/
        for (int fila = 0; fila < num_filaM1; fila++)
        {
            for (int columnas2 = 0; columnas2 < num_columnaM2; columnas2++)
            {
                matriz3[fila][columnas2] = {0};
                for (int columna_fila = 0; columna_fila < num_columnaM1; columna_fila++)
                {
                    //cout << "En esta vuelta se mulplica " << matriz1[fila][columna_fila] << " por " << matriz2[columna_fila][columnas2] << endl;
                    multiplicar[fila][columnas2] = matriz1[fila][columna_fila] * matriz2[columna_fila][columnas2];
                    //cout << " Y se suman " << matriz3[fila][columnas2] << " + " << multiplicar[fila][columnas2] << endl;
                    matriz3[fila][columnas2] += multiplicar[fila][columnas2];
                    //cout << "Total suma para esta posicion " <<  matriz3[fila][columnas2] << endl;
                }
                //cout << "Vuelta commpleta" << endl;
            }
        }
        /*##########################################################################################*/
        /*MOSTRAR POR PANTALLA*/
        for (int fila = 0; fila < num_filaM1; fila++)
        {
            for (int columnas = 0; columnas < num_columnaM2; columnas++)
            {
                cout << matriz3[fila][columnas] << " ";
            }
            cout << endl;
        }
    }
    else{
         cout << "No se puede realizar la multiplicacion, no coinciden las columnas de la Matriz1 con las filas de la Matriz2.";
    }
    return 0;
}