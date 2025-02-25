#include <iostream>
using namespace std;
int main(){
    /*El primer [] es para las filas. el segundo [] es para las columnas y
    el tercer [] es para la profundidad. Para este ejemplo tendría 12 valores
    el array = 2*2*3*/
    /*Para asignar valores directamente seria: array[2][2][2]{
    {{1,2},{3,4}}
    {{5,6},{7,8}}
    }  es decir se pone como un arrayBidimensional y después se repite las veces
    que tenga de profundidad*/
    int array3Dimensiones[2][2][3];
    for (int fila = 0; fila < 2; fila++)
    {
        for (int columna = 0; columna < 2; columna++)
        {
            for (int profundidad = 0; profundidad < 3; profundidad++)
            {
                cout << "Introduce un numero para la fila " << fila << " columna " << columna << " y la profundida " << profundidad << ": ";
                cin >> array3Dimensiones[fila][columna][profundidad];
            }
        } 
    }
    system("cls");
    for (int fila = 0; fila < 2; fila++)
    {
        for (int columna = 0; columna < 2; columna++)
        {
            for (int profundidad = 0; profundidad < 3; profundidad++)
            {
                cout << "El valor para la fila " << fila << " columna " << columna << " y la profundida " << profundidad << " es: ";
                cout << array3Dimensiones[fila][columna][profundidad] << endl;
            }
        } 
    }
    return 0; 
}