//Desarrolla un programa que calcule he imprima los N números de la serie de
// fibonacci.

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, n2, numero_veces, n_fibbo;
    n = 0;
    n2 = 1;
    cout << "Introduce el numero de veces:" << endl;
    cin >> numero_veces;
    if (numero_veces<=0)
    {
        cout << "No hay secuencia que mostrar.";
    }
    else if (numero_veces == 1)
    {
        cout << n << endl;
    }
    else if (numero_veces == 2)
    {
        cout << n << endl << n2 << endl;
    }
    else if (numero_veces>=3)
    {
        numero_veces=numero_veces-2;
        cout << n << endl;
        cout << n2 << endl;
        //BUCLE WHILE PARA MOSTAR HASTA LA SECUENCIA DESEADA.
        while (numero_veces>0)
        {
            n_fibbo=n+n2;
            n = n2;
            n2 = n_fibbo;
            cout << n_fibbo << endl;
            numero_veces=numero_veces-1;
        }    
    }
    cout << endl << "Programa finalizado.";
    return 0;
}