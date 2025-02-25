/*DESCRIPCION DEL EJERCICIO
Crea un programa que permita resolver la ecuación siguiente, con valores
ingresados X,Y y Z por el usuario:
(3 ∗ √X)/(Y-Z+1).
El programa debe validar que el valor de Y−Z+1 no sea igual a cero y que X
no sea negativo para evitar errores de cálculo. En caso de que se ingrese
algún valor no válido, muestra un mensaje indicando el error específico.

### PLANTEAMIENTO DEL EJEJERCIO 
Tras incluir las bibliotecas, el comando para los std, declarar el main() y
las variables.
Lo primero que hago, tras solicitar los datos de las variables correspondientes
por teclado, es comprobar las 2 condiciones requeridas mediante un condicional
IF (primero las 2 en conjunto, si se cumple al menos 1 de las 2, entra) con su
ELSE (ejecutar la ecuación): (después dentro, por separado para cada condición 
ya que hay que especificar cada error concreto) un condicional IF por si X es 
negativo, otro condicional IF para el divisor de la ecuación: (Y-Z+1) es igual
a cero.
Posteriormente, si no hubo error previo por cumplirse alguno de los condicionales
anteriores, paso a ejecutar la ecuación y mostrar el resultado dentro del ELSE. 
Por último indico que el programa ha finalizado.
 
### CODIGO:*/
#include <iostream>
#include <cmath>//Biblioteca para poder usar el comando sqrt.
using namespace std;
int main(){
    float x, y, z, resultado; //Declaradas float ya que operamos con decimales.
    cout << "Introduce el valor de X: ";
    cin >> x;
    cout << "Introduce el valor de Y: ";
    cin >> y;
    cout << "Introduce el valor de Z: ";
    cin >> z;
    if (x < 0 || (y - z + 1) == 0){//Para controlar si hay error o no lo hay y se continua en el ELSE.
        if (x < 0)//Para especificar el error concreto de X.
        {
            cout << "Error. Ha introducido un valor negativo para X, la operacion no puede realizarse." << endl;
        }
        if ((y - z + 1) == 0)//Para especificar el error concreto del divisor.
        {
            cout << "Error. El divisor resultante de " << y << "-" << z << "+1 es 0, no se puede realizar la operacion." << endl;
        }
    }
    else{
        resultado = (3 * sqrt(x))/(y - z + 1);
        cout << "El resultado de (3 * Raiz Cuadrada de " << x << ")/(" << y << "-" << z << "+1) es " << resultado << endl;
    }
    cout << "El programa ha finalizado. Saludos.";
    return 0;
}