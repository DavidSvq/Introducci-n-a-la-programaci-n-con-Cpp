//DESCRIPCION DEL EJERCICIO
//Desarrolla un programa que genere un número aleatorio entre 1 y 100. El
// usuario deberá adivinar dicho número introduciendo valores por teclado.
// El programa deberá decirle al usuario si el número que ha introducido es
// mayor o menor que el que genero aleatoriamente al principio, hasta que
// lo adivine. Al final poner texto de felicitación por haberlo adivinado y el
// número de intentos que ha necesitado.

/*PLANTEAMIENTO DEL EJEJERCIO 
Tras incluir las bibliotecas, el comando para los std, declarar el main() y las variables:
Genero un numero aleatorio y solicito mediante un bucle DO WHILE numeros por telcado
hasta que acierte el numero aleatorio. Ademas, en caso de no acertar, se indicara 
mediante un condicional IF si el numero introducido es menor o (ELSE) mayor que el
generado aleatoriamente.
Posteriormente a cuando se acierte el numero, se mostrara el numero de intentos 
generados para acertar, controlados por la variable intentos.

//AÑADADIDO
//Aunque si se introducen numeros fuera de rango (menores que 1 y mayores que 100), 
// el programa funcionaria igual indicando si es mayor o menor, uso un bucle DO WHILE
// que controle ese rango, no contando como intento si se introduce un numero fuera del
// rango 1-100.
//Le añado al programa una tabla de ranking según el numero de intentos mediante una
// funcion llamada clasificacion.
### CODIGO*/
#include <iostream>
#include <ctime> // Biblioteca para generar el numero aleatorio a traves del reloj del sistema.
using namespace std;
void clasificacion(int intentos);//Aviso que la funcion esta posterior al main().
int main(){
    int numeroUsuario, numeroAleatorio, intentos = 1;
    srand(time(NULL)); //Se captura el momento del reloj.
    for (int i = 0; i < 100;i++) // Bucle para generar el numero aleatorio con rango del 1 al 100.
    {
        numeroAleatorio = 1+rand()%100;
    }
    //cout << numeroAleatorio << endl; //Para comprobar la clasificacion(poder acertar en el intento exacto que quieras) solo hay que descomentarlo.
    do //Bucle para solicitar numero hasta acertar.
    {
        do //Bucle para comprobar que el numero introducido esta el rango establecido.
        {
            cout << "Busca un numero del 1 al 100: ";
            cin >> numeroUsuario;
            if (numeroUsuario < 1 || numeroUsuario > 100)
            {
                cout << "Numero fuera de rango. Intento fallido." << endl;
            }
            
        } while (numeroUsuario < 1 || numeroUsuario > 100);
         
        if (numeroUsuario == numeroAleatorio)
        {
            clasificacion(intentos);//Llamada de la funcion.
        }
        else
        {
            intentos++;
            if (numeroUsuario>numeroAleatorio)
            {
                cout << "El numero que buscas es menor." << endl;
            }
            else
            {
                cout << "El numero que buscas es mayor." << endl;
            }
        }

    } while (numeroUsuario!=numeroAleatorio);
    cout << "Este programa se autodestruira en 3,2,1...";
    return 0;
}
/*FUNCION
Se encarga de clasificar los numeros de intentos realizados mediante condicionales IF, ELSE IF.
La declaro VOID ya que no quiero que me devuelva un tipo de variable concreto con el return*/
void clasificacion(int intentos){
    if (intentos == 1)
    {
        cout << "Mision Posible!! Increible!! Acertaste a la primera. Y que no te toque la loteria!!!" << endl;
        cout << "Pero oye, has ganados 10.000 Euros. Ethan te los paga: Mision Imposible 10." << endl;
    }
    else if (intentos < 5)
    {
        cout << "Vaya!! Eres bueno buscando numeros. En menos de 5 intentos, lo hiciste " << intentos << " intentos." << endl;
        cout << "Quizas Ethan tenga una mision para ti, y esta vez no sera lavarle el jet." << endl;
    }
    else if (intentos < 10)
    {
        cout << "Vaya menos de 10 intentos. Lo hiciste " << intentos << " intentos." << endl;
        cout << "No esta mal, pero seguiras trayendo los cafes." << endl;
    }
    else if (intentos < 21)
    {
        cout << "Uff, no se te da bien buscar numeros. Mas de 10 intentos. Lo hiciste " << intentos << " intentos." << endl;
        cout << "Te gustaria mas buscar letras, eh!" << endl;
    }
    else if (intentos > 20)
    {
        cout << "Ostia un burro que cuenta!!!Espero que tambien sepas leer. Lo hiciste " << intentos << " intentos." << endl;
        cout << "No pasa nada, la organizacion te necesita!!A Ethan le gusta cualquier medio de transporte, en mas de un aprieto escapo en burro." << endl;
    }   
}