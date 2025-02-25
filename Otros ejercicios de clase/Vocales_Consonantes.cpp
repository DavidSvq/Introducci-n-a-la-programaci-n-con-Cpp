//Crea un programa en C++ que permita al usuario introducir por teclado una palabra y nos diga 
//cuantas vocales y consonantes tiene.
//Tambien nos debe decir cuantas a, e, i, o y ,u son.
//El programa seguirá pidiendo palabras y mostrando el resutlado del algoritmo hasta que se 
// introduce un 0.

#include <iostream>
using namespace std;
int main(){
    string palabra;
    int contadorVocales = 0;
    int contadorConsonante = 0;
    int contadorA = 0;
    int contadorE = 0;
    int contadorI = 0;
    int contadorO = 0;
    int contadorU = 0;
    bool salir = false;
    //BUCLE DO WHILE HASTA QUE SE PULSE CERO.
    do{
        cout << "Introduce una palabra o Pulsa 0 para finalizar." << endl;
        cin >> palabra;
        int longitud = palabra.length();//COMANDO .lengt() PARA OBTENER LA LONGITUD, EN ESTE CASO Nº DE LETRAS, DE LA VARIABLE PALABRA.
        //CONDICIONAL IF PARA EJECUTAR EL PROGRAMA O ELSE SALIR DEL PROGRAMA.
        if (palabra!="0")
        {
            //BUCLE FOR PARA CONTAR LAS VOCALES Y LAS CONSONANTES.
            for (int c = 0; c < longitud; c++){
                if (palabra[c]=='a' || palabra[c]=='e' || palabra[c]=='i' || palabra[c]=='o' || palabra[c]=='u')
                {
                    contadorVocales++;
                }
                else
                {
                    contadorConsonante++;
                }
            }
            //BUCLE FOR PARA CONTAR CUANTAS DE CADA VOCAL HAY.
            for (int c = 0; c <= longitud; c++)
            {
                if (palabra[c]=='a')
                {
                    contadorA++;
                }
                else if (palabra[c]=='e')
                {
                    contadorE++;
                }
                else if (palabra[c]=='i')
                {
                    contadorI++;
                }
                else if (palabra[c]=='o')
                {
                    contadorO++;
                }
                else if (palabra[c]=='u')
                {
                    contadorU++;
                }
            }
            cout << "La palabra " << palabra <<" tiene " << longitud << " letras." << endl;
            //CONDICONALES IFs PARA MOSTRAR SOLO LAS LETRAS QUE APAREZCAN EN LA PALABRA
            //¿PREGUNTAR POR QUE CON EL ELSE IF NO FUNCIONA? Eran condicionales diferentes.
            if (contadorVocales>0)
            {
                if (contadorVocales==1)
                {
                    cout << "\tHay " << contadorVocales << " vocal." << endl;
                }
                else
                {
                    cout << "\tHay " << contadorVocales << " vocales:" << endl;
                }
            }
            if (contadorA>0)
            {
                if (contadorA==1)
                {
                    cout << "\t\tHay " << contadorA << " a." << endl;
                }
                else
                {
                    cout << "\t\tHay " << contadorA << " aes." << endl;
                }
            }
            if (contadorE>0)
            {
                if (contadorE==1)
                {
                    cout << "\t\tHay " << contadorE << " e." << endl;
                }
                else
                {
                    cout << "\t\tHay " << contadorE << " es." << endl;
                }
            }
            if (contadorI>0)
            {    
                if (contadorI==1)
                {
                    cout << "\t\tHay " << contadorI << " i." << endl;
                }
                else
                {
                    cout << "\t\tHay " << contadorI << " ies." << endl;
                }
            }
            if (contadorO>0)
            {
                if (contadorO==1)
                {
                    cout << "\t\tHay " << contadorO << " o." << endl;
                }
                else
                {
                    cout << "\t\tHay " << contadorO << " oes." << endl;
                }
            }
            if (contadorU>0)
            {
                if (contadorU==1)
                {
                    cout << "\t\tHay " << contadorU << " u." << endl;
                }
                else
                {
                    cout << "\t\tHay " << contadorU << " ues." << endl;
                }
            }
            if (contadorConsonante>0)
            {
                if (contadorConsonante==1)
                {
                    cout << "\tHay " << contadorConsonante << " consonante." << endl;
                }
                else
                {
                    cout << "\tHay " << contadorConsonante << " consonates." << endl;
                }
            }
            //REESTABLEZCO LOS VALORES PARA LA SIGUIENTE EJECUCION.
            contadorVocales = 0;
            contadorConsonante = 0;
            contadorA = 0;
            contadorE = 0;
            contadorI = 0;
            contadorO = 0;
            contadorU = 0;
        }
        else
        {
            salir=true;
        }
    }while (salir == false);
    cout << "El programa ha finalizado.";
    return 0;
}