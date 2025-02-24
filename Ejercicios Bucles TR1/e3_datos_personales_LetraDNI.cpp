//Desarrolla un programa que solicite Nombre y Apellidos, Número DNI, y
// Teléfono, y muestre al finalizar cada campo en una línea y la letra del DNI en la
// que corresponda. Utiliza la función que has creado.

#include <iostream>
using namespace std;
//Void se usa para cuando quieres que una función no devuelva ningun resultado.
void solicitarYCalcularLetra (int& numeroDNI, char& letraDNI)
{
    #include <iostream>
    using namespace std;
    int resto;
    do
    {
        cout << "Introduce tu numero de DNI: " << endl;
        cin >> numeroDNI;
        resto=numeroDNI%23;
    } while (numeroDNI<10000000 || numeroDNI>99999999);
    switch (resto)
    {
    case 0:
        letraDNI='T';
        break;
    case 1:
        letraDNI='R';
        break;
    case 2:
        letraDNI='W';
        break;
    case 3:
        letraDNI='A';
        break;
    case 4:
        letraDNI='G';
        break;
    case 5:
        letraDNI='M';
        break;
    case 6:
        letraDNI='Y';
        break;
    case 7:
        letraDNI='F';
        break;
    case 8:
        letraDNI='P';
        break;
    case 9:
        letraDNI='D';
        break;
    case 10:
        letraDNI='X';
        break;
    case 11:
        letraDNI='B';
        break;
    case 12:
        letraDNI='N';
        break;
    case 13:
        letraDNI='J';
        break;
    case 14:
        letraDNI='Z';
        break;
    case 15:
        letraDNI='S';
        break;
    case 16:
        letraDNI='Q';
        break;
    case 17:
        letraDNI='V';
        break;
    case 18:
        letraDNI='H';
        break;
    case 19:
        letraDNI='L';
        break;
    case 20:
        letraDNI='C';
        break;
    case 21:
        letraDNI='K';
        break;
     case 22:
        letraDNI='E';
        break;
    
    default:
        cout << "El numero no es valido.";
        break;
    }
}

int main(){
string nombre, apellidos;
char letraDNI;
int telefono, numeroDNI;
cout << "Introduce Nombre: " << endl;
cin >> nombre;
cout << "Introduce Apellidos: " << endl;
//getline(cin, apellidos);
cin >> apellidos;
solicitarYCalcularLetra(numeroDNI, letraDNI);
cout << "Introduce telefono: " << endl;
cin >> telefono;
cout << "Los datos son:" << endl;
cout << "\tNombre: " << nombre << endl;
cout << "\tApellidos: " << apellidos << endl;
cout << "\tDNI: " << numeroDNI << "-" << letraDNI << endl;
cout << "\tTelefono: " << telefono << endl;
cout << endl << "Programa finalizado.";
return 0;
}