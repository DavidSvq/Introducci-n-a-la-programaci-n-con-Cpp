//Crear un programa que pregunte por los pesos de dos objetos peso1 y peso2,
// el programa debe indicar si el peso1 representa la cuarta parte del peso2
// para decir quecumple con la especificación y de no ser así rechazar los 
// objetos.

#include <iostream>
using namespace std;
int main(){
    float peso, peso2;
    cout << "Introduce el primer peso: ";
    cin >> peso;
    cout << "Introduce el segundo peso: ";
    cin >> peso2;
    if (peso2==peso*4)
    {
        cout << "Peso aceptado.";
    }
    else
    {
        cout << "Peso rechazado.";
    }
    
}
