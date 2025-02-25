#include <iostream>
using namespace std;
int numero_letra(string palabra);

int main(){
    int contador;
    string palabra;
    cout << "Introduce una palabra: ";
    cin >> palabra;
    contador=numero_letra(palabra);
    return 0;
}

int numero_letra(string palabra){
    char letra = 'a';
    int contador = 0;
    while (letra<=122){
        for (int i = 0; i < palabra.length(); i++)
        {
            if (palabra[i]==letra)
            {
                contador++;   
            }    
        }
        if (contador>0)
        {
            cout << "La letra " << letra << " se repite " << contador << endl;
        }
        contador=0;
        letra+=1;
    }
    return contador; 
}