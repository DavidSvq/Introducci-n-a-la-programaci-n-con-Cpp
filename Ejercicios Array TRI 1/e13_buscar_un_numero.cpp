#include <iostream>
#include <ctime>
using namespace std;
int main(){
    int numero;
    int numeros[20];
    bool numero_confirmado = false;
    srand(time(NULL));
    for (int i=0; i < 20; i++){
        numeros[i] = 1 + rand() % 50;
    }
    cout << "Introduce un numero: ";
    cin >> numero;
    for (int i = 0; i < 20; i++)
    {
        if (numero == numeros[i]){
            numero_confirmado = true;
        }
    }
    if (numero_confirmado == true)
    {
        cout << "El numero " << numero << " si esta en el array.";

    }
    else{
        cout << "El numero " << numero << " no esta en el array.";
    }
    return 0;
}