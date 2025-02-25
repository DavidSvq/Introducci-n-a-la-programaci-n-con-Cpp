#include <iostream>
#include <ctime>
using namespace std;

int main()
{

    // INICIALIZAMOS LA SEMILLA
    srand(time(NULL));

    //La función rand() nos devuelve un numero aletario
    /*Para que este dentro de rango que queremos debemos seguir
    * numAleatorio = valorMasBajo + ran()%(rangoDeValores);
    * en el ejemplo 0+rand()%10 nos dará un numero entre 0 y 9
    * en el ejemplo 5+rand()%5 nos dará un numero entre 5 y 9
    */
    for (int i =0; i<10;i=i+1)
    {
        cout << 1+rand()%6 <<endl;
    }
}