/*Crea un programa que lea 10 números por teclado, los almacene en un
array y muestre la suma, resta, y multiplicación de todos*/

#include <iostream>
using namespace std;
int main(){
    int array[10], suma = 0, resta, multiplicacion = 1;
    for (int i = 0; i < 10; i++)
    {
        cout << "Introduce el numero " << i +1  << ": ";
        cin >> array[i];
        suma += array[i];
        multiplicacion *= array[i];
    }
    resta = array[0];
    for (int i = 1; i < 10; i++)
    {
       resta -= array[i];  
    }
    cout << suma << endl;
    cout << resta << endl;
    cout << multiplicacion << endl;
    return 0;
}