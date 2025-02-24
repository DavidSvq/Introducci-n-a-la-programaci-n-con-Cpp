#include <iostream>
#include <ctime>//BIBLIOTECA QUE CONTIENTE EL RELOJ, NECESARIO PARA EL COMANDO srand.
using namespace std;
int main(){
    int eleccion, rival;
    //BUCLE DO WHILE PARA GARANTIZAR QUE SE INTRODUCE 1,2 o 3.
    do
    {
        cout << "Pulsa 1 para Piedra" << endl;
        cout << "Pulsa 2 para Tijeras" << endl;
        cout << "Pulsa 3 para Papel" << endl;
        cin >> eleccion;
    } while (eleccion<=0 || eleccion>3);
    srand(time(NULL));//PARA INICICAR LA ALEATORIEDAD SEGUN EL RELOJ DEL SISTEMA.
    //NUMERO ALEATORIO ENTRE EL 1 (COMIENZO) Y EL 3 (FINAL) AMBOS INCLUSIVE.
    rival=1+rand()%3;
    //SWITCH PARA COMPARAR EL RESULTADO SEGUN LO SACADO POR CADA PARTE.
    switch (eleccion)
    {
    case 1:
        cout << "Has sacado Pierda." << endl;
        if (rival==1)
        {
            cout << "La maquina saca Piedra." << endl;
            cout << "Empate.";
        }
        else if (rival==2)
        {
            cout << "La maquina saca Tijeras." << endl;
            cout << "Tu ganas.";
        }
        else if (rival==3)
        {
            cout << "La maquina saca Papel." << endl;
            cout << "La maquina gana.";
        }
        break;
    case 2:
        cout << "Has sacado Tijeras." << endl;
        if (rival==1)
        {
            cout << "La maquina saca Piedra." << endl;
            cout << "La maquina gana.";
        }
        else if (rival==2)
        {
            cout << "La maquina saca Tijeras." << endl;
            cout << "Empate.";
        }
        else if (rival==3)
        {
            cout << "La maquina saca Papel." << endl;
            cout << "Tu ganas.";
        }
        break;
    case 3:
        cout << "Has sacado Papel." << endl;
        if (rival==1)
        {
            cout << "La maquina saca Piedra." << endl;
            cout << "Tu ganas.";
        }
        else if (rival==2)
        {
            cout << "La maquina saca Tijeras." << endl;
            cout << "La maquina gana.";
        }
        else if (rival==3)
        {
            cout << "La maquina saca Papel." << endl;
            cout << "Empate.";
        }
        break;
    default:
        break;
    }
    cout << endl << "Programa finalizado.";
    return 0;  
}