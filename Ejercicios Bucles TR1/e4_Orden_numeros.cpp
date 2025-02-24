//Un programa que le introduzcas 4 números por teclado y los imprima en orden
// de mayor a menor.

#include <bits/stdc++.h>
using namespace std;
int main(){
    int numeros[4]; //Directorio o Array de nombre numeros . Los [] indican el contenido. En este ejemplo serian 4: el 0, el 1, el 2 y el 3
    cout << "Introduce cuatro números: " <<endl;
    for (int i = 0; i < 4; i++) //Categoria int (entero) incio bucle(i=0) fin el bucle (i<4); cantidad incremento. En este ejemplo, inicia en el 0 y para en el 3(son 4) y se incrementa a 1 en cada vuelta.
    {
        cin >> numeros[i];
    }
    sort(numeros, numeros+4, greater<int>()); //Función SORT (Rango incial, Rango Final, Criterio opcional en este caso greate mayor greater<int>())
    cout << "Numeros de mayor a menor" << endl;
    for (int i = 0; i < 4; i++) //Mismo bucle pero para imprimir en pantalla.
    {
        cout << numeros[i] << " ";
    }
    cout << numeros[2];//Imprimo en pantalla un numero concreto de la lista.
    return 0;
}