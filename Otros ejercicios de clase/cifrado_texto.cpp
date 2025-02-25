#include <iostream>
using namespace std;

int main(){
    string palabra;
    int cifrado;
    int opcion;
    cout << "Introduce una palabra: ";
    getline (cin, palabra);
    cout << "Introduce el numero del cifrado: ";
    cin >> cifrado;
    cout << "Pulsa 1 para cifrar o Pulsa 2 descifrar: ";
    cin >> opcion;

    if (opcion == 1)
    {
        for (int letra = 0; letra < (palabra.length()); letra++)
        {
        palabra[letra] += cifrado;
            cout << palabra[letra] << "Letra fuera" << endl;
            if (palabra[letra] > 122)
            {
                int rebase = palabra[letra] - 122;
                palabra[letra] = 96 + rebase;
                cout << palabra[letra] << "Letra dentro" << endl;
            }
        }
    cout << palabra;
    }
    if (opcion == 2)
    {
        for (int i = 0; i < palabra.length(); i++)
        {
        palabra[i]-=cifrado;
            if ((palabra[i]) < 97)
            {
                int rebase = 97 - (palabra[i]);
                if (rebase == 0)
                {
                    palabra[i] = 97;
                }
                else{
                    //cout << rebase << endl;
                    palabra[i]=123 - rebase;
                }
            }
        }
    cout << palabra; 
    }
    return 0;
}
