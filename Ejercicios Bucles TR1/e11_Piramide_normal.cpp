//Hacer el anterior pero que imprima una pirámide normal.

#include <iostream>
using namespace std;
int main(){
    int numero;
    string letra="*", base="*";
    cout << "Introduce un numero:" << endl;
    cin >> numero; 
    while (numero>0) //BUCLE PARA LA ALTURA HASTA QUE NUMERO VALGA 0.
    {
        cout << base << endl;
        base+=letra; // INCREMENTO DE LA BASE
        numero--;//DECREMENTO DE LA ALTURA
    }
    if (numero<=0)
    {
        cout << "Programa finalizado.";
    }
    return 0;
}