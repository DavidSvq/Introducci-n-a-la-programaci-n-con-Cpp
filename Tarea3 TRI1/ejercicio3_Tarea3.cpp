/*DESCRIPCION DEL EJERCICIO
Escribe un programa que muestre un menú con tres opciones:
 1. Convertir un texto a mayúsculas.
 2. Convertir un texto a minúsculas.
 3. Mostrar el número de caracteres del texto.
El programa debe solicitar al usuario un texto y, en función de la opción
seleccionada, realizar la conversión indicada o mostrar la cantidad de
caracteres del texto. Para realizar las conversiones a mayúsculas y
minúsculas, no puedes utilizar funciones predefinidas; debes implementar
las funciones tú mismo. Puedes utilizar únicamente cin, cout y getline
para la entrada y salida de datos.

### PLANTEAMIENTO DEL EJERCICIO
Tras incluir la biblioteca, el comando para los std , declarar el main() y
justificar las variables:
    - 2 variables del tipo string: una para el texto a introducir y otra para el
    texto convertido que devuelven las funciones (hay 2) del tipo string.
    - 2 variables del tipo int (entero): 1 para la opción del menu y otra para el
    return de la funcion para contar el numero de caracteres del texto (si todas las
    funciones dieran un return del mismo tipo, por ejemplo las 3 fueran string,
    esta ultima variable no haria falta, ni usar un condicional IF en el Case 5
    del segundo menu).
Creo un primer menu con 4 opciones (3 visibles y el default) mediante un switch asignando
del 1 al 3 las diferentes operaciones a realizar. En el default entrará todo numero que 
no sea del 1 al 3, indicando que no se opto por ninguna opcion valida.
Seguidamente creo 3 funciones: una para pasar a mayusculas, otra para pasar a minusculas
y otra para contar los caracteres (incluidos los espacios).
Para finalizar, muestro el resultado segun el caso dado.

### AÑADIDO
El programa solicitará texto hasta que el usuario confirme que quiere salir (opcion 6),
a traves de un bucle DO WHILE. Para ello presento un segundo menu con esta opcion añadida.
El programa guarda el resultado en una en variable y da la opcion (numero 5) de volver a 
consultarla en la siguiente ejecucion. Para ello presento un segundo menu con esta opcion añadida.
Además añado a la opcion (numero 3) del recuento de caracteres, el recuento de palabras y 
espacios en blanco mediante otras funciones (ahora son 6 funciones en total).
También la opcion ( numero 4 ) de contar el numero de letras, es decir los caracteres sin los espacios.
Justificación de las nuevas variables:
Creo 4 variables mas del tipo int para guardar el return de las funciones añadidas: para 
controlar la opcion_anterior del Case 5 del segundo menu, contar las palabras, contar sin los 
espacios y contar los espacios en blanco. 

CODIGO:*/
#include <iostream>
using namespace std;
//Aviso de que las funciones estan posterior al main().
string convertir_a_mayusculas(string texto);
string convertir_a_minusculas(string texto);
int numero_de_caracteres(string texto);
int numero_de_palabras(string texto);
int espacios_en_blanco(string texto);
int cantidad_sin_espacios(string texto);
///////////////////////////////////////////////////// 
int main(){
    string texto, resultado_opcion_1_2;
    int opcion, cantidad_caracteres, cantidad_palabras, cantidad_espacios;
    int caracteres_sin_espacios, opcion_anterior;
    cout << "Introduce el texto: " << endl;
    getline(cin, texto);
    //Menu Inicial:
    cout << "Pulsa una opcion:" << endl;
    cout << "\t1. Convertir un texto a mayusculas." << endl;
    cout << "\t2. Convertir un texto a minusculas." << endl;
    cout << "\t3. Mostrar el numero de caracteres del texto." << endl;
    cin >> opcion;
    switch (opcion)
    {
    case 1:
        resultado_opcion_1_2 = convertir_a_mayusculas(texto);//Llamada de la funcion.
        cout << resultado_opcion_1_2 << endl;
        opcion_anterior = 1;
        break;
    case 2:
        resultado_opcion_1_2 = convertir_a_minusculas(texto);//Llamada de la funcion.
        cout << resultado_opcion_1_2 << endl;
        opcion_anterior = 2;
        break;
    case 3:
        cantidad_caracteres = numero_de_caracteres(texto);//Llamada de la funcion.
        cantidad_palabras = numero_de_palabras(texto); //Llamada a las funciones por si se solicita
        cantidad_espacios = espacios_en_blanco(texto);// mostrar la anterior opcion en el siguiente menu.
        cout << "Este texto tiene " << cantidad_caracteres << " caracteres." << endl;
        opcion_anterior = 3;
        break;
    default:
        cout << "No pulso ninguna de las opciones disponibles." << endl;
        break;
    }
    //# AÑADIDO
    do //Bucle hasta que se pulse 6 para salir.
    {   
        //Segundo Menu (3 opciones añadidas y 1 ampliada):
        cout << "Pulsa una opcion:" << endl;
        cout << "\t1. Convertir un texto a mayusculas." << endl;
        cout << "\t2. Convertir un texto a minusculas." << endl;
        cout << "\t3. Mostrar el numero de caracteres, palabras y espacios en blanco del texto." << endl;
        cout << "\t4. Mostrar el numero de caracteres, sin contar los espacios, del texto." << endl;
        cout << "\t5. Mostrar la ultima opcion otra vez." << endl;
        cout << "\t6. Salir." << endl;
        cin >> opcion;
        cin.ignore();//Comando para limpiar el salto de linea del buffer. 
        //IF para solicitar el texto solo con las opciones necesarias (De la 1 a la 4)
        if (opcion < 5 && opcion > 0)
        {
            cout << "Introduce el texto: " << endl;
            getline(cin, texto);
        } 
        switch (opcion)
        {
        case 1:
            resultado_opcion_1_2 = convertir_a_mayusculas(texto);//Llamada de la funcion.
            cout << resultado_opcion_1_2 << endl;
            opcion_anterior = 1;
            break;
        case 2:
            resultado_opcion_1_2 = convertir_a_minusculas(texto);//Llamada de la funcion.
            cout << resultado_opcion_1_2 << endl;
            opcion_anterior = 2;
            break;
        case 3:
            cantidad_caracteres = numero_de_caracteres(texto); //Llamada de la funcion.
            cantidad_palabras= numero_de_palabras(texto); //Llamada a la funcion.
            cantidad_espacios = espacios_en_blanco(texto); //Llamada a la funcion.
            cout << "Este texto tiene " << cantidad_caracteres << " caracteres, " << cantidad_palabras << " palabras y " << cantidad_espacios << " espacios en blanco." << endl;
            opcion_anterior = 3;
            break;
        case 4:
            caracteres_sin_espacios = cantidad_sin_espacios(texto); //Llamada a la funcion.
            cout << "Este texto, sin contar los espacios tiene " << caracteres_sin_espacios << " caracteres." << endl;
            opcion_anterior = 4;
            break;
        case 5:
            if (opcion_anterior == 3 )
            {
                cout << "Este texto tiene " << cantidad_caracteres << " caracteres, " << cantidad_palabras << " palabras y " << cantidad_espacios << " espacios en blanco." << endl;
            }
            else if (opcion_anterior == 4)
            {
                cout << "Este texto, sin contar los espacios tiene " << caracteres_sin_espacios << " caracteres." << endl;
            }
            else{
                cout << resultado_opcion_1_2 << endl;
            }
            break;
        case 6:
            cout << "Saliendo....." << endl;
            break;
        default:
            cout << "No pulso ninguna de las opciones disponibles." << endl;
            break;
        }
    } while (opcion != 6); 
    cout << "Programa finalizado. ";
    return 0;
}
/*FUNCIONES:
Return del tipo string. 
Con bucle FOR para recorrer el texto entero y mediante un condicional IF controlar
que letras son minusculas/mayusculas para restarle/sumarle 32 (diferencia entre
caracteres en la tabla ASCII) y pasarlas a mayusculas/minusculas si corresponde.*/
string convertir_a_mayusculas(string texto){
    int longitud = texto.length();
    for (int letra = 0; letra < longitud; letra++)
    {
        if (texto[letra]>96)
        {
            texto[letra] -= 32;
        }      
    }
    return texto; 
}
string convertir_a_minusculas(string texto){
    int longitud = texto.length();
    for (int letra = 0; letra < longitud; letra++)
    {
        if (texto[letra]< 91)
        {
            texto[letra] += 32;
            if (texto[letra] == '@')
            {
                texto[letra] = ' ';
            }
        }      
    }
    return texto; 
}
/*Return del tipo int(entero): 
Se aplica el comando length() al texto en el return*/
int numero_de_caracteres(string texto){
    //int longitud = texto.length();
    return texto.length(); //longitud;
}
/*Para calcular las palabras, uso un bucle FOR para recorrer el texto y 2 condicionales IF
para controlar el inicio/fin de una palabra y poder contarlas.*/
int numero_de_palabras(string texto){
    int contador_palabra = 0;
    bool es_palabra = false;
    for (int caracter = 0; caracter < texto.length(); caracter++)
    {
        //SI el caracter cumple estas 2 condiciones: es diferente del espacio en blanco y
        // es_palabra es false (Significa que acabamos de encontrar el inicio de una palabra)
        // Aumenta el contador de palabras en 1 y es_palabra pasa a verdadero.
        if (texto[caracter] != ' ' && es_palabra == false)
        {
            contador_palabra++;
            es_palabra = true;
        }
        //SI el caracter cumple estas 2 condiciones: es igual al espacio en blanco y es_palabra
        // es verdadero (Significa que llega el final de la palabra). Por tanto, se indica que
        // es_palabra pasa a ser falso.
        if (texto[caracter] == ' ' && es_palabra == true)
        {
            es_palabra = false;
        }
    }
    return contador_palabra;
}
//Para contar los espacios que hay en el texto.
int espacios_en_blanco(string texto){
    int contador_espacios = 0;
    for (int caracter = 0; caracter < texto.length(); caracter++)
    {
        if (texto[caracter] == ' ')
        {
            contador_espacios++;
        }    
    }
    return contador_espacios;
}
//Para calcular el numero de caracteres sin tener en cuenta los espacios.
int cantidad_sin_espacios(string texto){
    int contador_sin_espacios = 0;
    int contador_espacios = 0;
    for (int caracter = 0; caracter < texto.length(); caracter++)
    {
        if (texto[caracter] == ' ')
        {
            contador_espacios++;
        }   
    }
    contador_sin_espacios = texto.length()-contador_espacios;
    return contador_sin_espacios;
}