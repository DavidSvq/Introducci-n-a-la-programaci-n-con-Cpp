#include <iostream>

using namespace std;

int main(){

    char letra = 'a';

    string cadena = "Hola mundo";
    
    cout<<cadena<<endl;
    
    for (int i = 0; i < 10; i++)
    {
        cout<<cadena[i]<<endl;
    }
    
    //El usuario ahora la mete.
    cin>>cadena;
    int longitud = cadena.size();

    cout<<"La longitud es :"<<longitud<<endl;

    for (int i = 0; i < longitud; i++)
    {
        //Va desde 0 hasta 31 --->32 posiciones
        cout<<cadena[i]<<endl;
    }
    
    return 0;
}