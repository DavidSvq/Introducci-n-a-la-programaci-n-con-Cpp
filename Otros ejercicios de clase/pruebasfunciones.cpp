#include <iostream>
using namespace std;
//AVISOS DE FUNCIONES###########
int numero_letras (string nl);
int numero_vocales (string v);
int numero_consonantes (string c);
int numero_aes (string a);
int numero_es (string e);
int numero_ies (string i);
int numero_oes (string o);
int numero_ues (string u);
//#############################
int main(){
    int longitud, num_vocales, num_consonantes, numeroA, numeroE, numeroI, numeroO, numeroU;
    string texto;
    bool salir = false;
    do
    {
        cout << "Introduce una palabra o Pulse 0 para salir: ";
        cin >> texto;
        if (texto!="0")
        {   //LLAMADAS DE LAS FUNCIONES
            longitud=numero_letras(texto);
            num_vocales = numero_vocales(texto);
            num_consonantes = numero_consonantes(texto);
            numeroA = numero_aes(texto);
            numeroE = numero_es(texto);
            numeroI = numero_ies(texto);
            numeroO = numero_oes(texto);
            numeroU = numero_ues(texto);
            cout << "Tiene " << longitud << " letras: " << num_vocales << " vocales, " << num_consonantes << " consonantes." << endl;
            cout <<  numeroA << " A, " << numeroE << " E, " << numeroI << " I, " << numeroO << " O, " << numeroU << " U." << endl;
        }
        else
        {
            salir=true;
        }
    } while (salir == false);
    cout << "Programa finalizado.";
    return 0;
}
//FUNCIONES
int numero_letras(string nl){
    return nl.length();
}
int numero_vocales (string v){
    int contadorVocales = 0;
    int longitud = v.length();
    for (int i = 0; i < longitud; i++)
    {
        if (v[i] == 'a' || v[i] == 'e' || v[i] == 'i' || v[i] == 'o' || v[i] == 'u')
        {
            contadorVocales++;
        }
    }
    return contadorVocales;
}
int numero_consonantes (string c){
    int contadorConsonantes = 0;
    int longitud = c.length();
    for (int i = 0; i < longitud; i++)
    {
        if (c[i] != 'a' && c[i] != 'e' && c[i] != 'i' && c[i] != 'o' && c[i] != 'u')
        {
            contadorConsonantes++;
        }
    }
    return contadorConsonantes;
}
int numero_aes (string a){
    int contadorA = 0;
    int longitud = a.length();
    for (int i = 0; i < longitud; i++)
    {
        if (a[i] == 'a')
        {
            contadorA++;
        }
    }
    return contadorA;
}
int numero_es (string e){
    int contadorE = 0;
    int longitud = e.length();
    for (int i = 0; i < longitud; i++)
    {
        if (e[i] == 'e')
        {
            contadorE++;
        }
    }
    return contadorE;
}
int numero_ies (string i){
    int contadorI = 0;
    int longitud = i.length();
    for (int y = 0; y < longitud; y++)
    {
        if (i[y] == 'i')
        {
            contadorI++;
        }
    }
    return contadorI;
}
int numero_oes (string o){
    int contadorO = 0;
    int longitud = o.length();
    for (int i = 0; i < longitud; i++)
    {
        if (o[i] == 'o')
        {
            contadorO++;
        }
    }
    return contadorO;
}
int numero_ues (string u){
    int contadorU = 0;
    int longitud = u.length();
    for (int i = 0; i < longitud; i++)
    {
        if (u[i] == 'u')
        {
            contadorU++;
        }
    }
    return contadorU;
}
