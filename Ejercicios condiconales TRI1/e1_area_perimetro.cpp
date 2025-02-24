//Programa que permite calcular el área o perímetro de varias 
// figuras (Triangulo, rectángulo, círculo y cuadrado).

//FUNCIONES MATEMATICAS:
//Para el círculo:
        // A=Pi*r^2 (El Area es igual a Pi por el radio al cuadrado)
        // P=2*Pi*r (El Perímetro es igual a 2 por Pi por el radio)
//Para el triangulo:
        // P=L1+L2+L3 (El Perímetro es igual a la suma de sus Lados)
        // A=(b*h)/2 (El Area es igual a la Base por la altura(h) divido entre 2)
//Para el rectángulo:
        // A=B*h (El Area es igual a la Base por la altura(h))
        // P=(2*B)+(h*2) (El Perímetro es igual a la suma de la Base por 2 más la altura (h) por 2)
//Para el cuadrado:
        // P=L*4 (El Perímetro es igual a L(Lado) por 4)
        // A=L^2 (El Area es igual al cuadro del Lado)

//CUALIDADES:
//Se define 7 variables como Reales (doble, para que obtena mayor número PI)
// y 1 variable del tipo entero para la OPCION de elegir figura.
//Se Solicita por pantalla esta información al usuario(dado el caso):
    //El valor de los lados.
    //El valor de la base.
    //El valor de la altura.
    //El valor del radio.
//Se muestra por pantalla esta información (dado el caso):
    //El resultado del Area y el Perímetro.
    //No se eligió ninguna de las 4 figuras disponibles.

//INFORMACION DESTACABLE:
//Se usa un switch para asignar un valor a cada figura y operar en función de la 
//OPCION elegida.

#include <bits/stdc++.h>
using namespace std;
int main(){
    double area, perimetro, lado, lado2, radio, base, h;
    int opcion;
    cout << "Eliga la figura para calcular el Area y el Perimetro:" << endl;
    cout << "Pulse 1 para el Cuadrado." << endl;
    cout << "Pulse 2 para el Rectangulo." << endl;
    cout << "Pulse 3 para el Triangulo." << endl;
    cout << "Pulse 4 para el Circulo." << endl;
    cin >> opcion;
    switch (opcion)
    {
    case 1://Cuadrado
        cout << "Vamos a calcular el Area y Perimetro de un cuadro, necesitamos: " << endl;
        cout << "el valor de sus lados:" << endl;
        cin >> lado;
        perimetro = lado * 4;
        area = lado * lado;
        cout << "El area es " << area << " y el perimetro es " << perimetro << ".";
        break;
    case 2://Rectangulo
        cout << "Vamos a calcular el Area y Perimetro de un rectangulo, necesitamos: " << endl;
        cout << "el valor de su base:";
        cin >> base;
        cout << "y de su Altura: " << endl;
        cin >> h;
        perimetro = (base * 2) + (h * 2);
        area = base * h;
        cout << "El area es " << area << " y el perimetro es " << perimetro << ".";
        break;
    case 3://Triangulo
        cout << "Vamos a calcular el Area y Perimetro de un triangulo, necesitamos: " << endl;
        cout << "el valor de sus 3 lados, introduzca primero la base: ";
        cin >> base;
        cout << "indroduzca el primer lado ";
        cin >>lado;
        cout << " introduzca el segundo lado: " << endl;
        cin >> lado2;
        cout << "Introduzca la altura " << endl;
        cin >> h;
        perimetro = base + lado + lado2;
        area = (base * h) / 2;
        cout << "El area es " << area << " y el perimetro es " << perimetro << ".";
        break;
    case 4://Circulo
        cout << "Vamos a calcular el Area y Perimetro de un circulo, necesitamos: " << endl;
        cout << "el valor de su radio:" << endl;
        cin >> radio;
        perimetro = 2 * M_PI * radio;
        area = M_PI * pow(radio,2);
        cout << "El area es " << area << " y el perimetro es " << perimetro << ".";
        break;
    
    default:
        cout << "Vaya! No opto por ninguna de las 4 figuras disponibles.";
        break;
    }
}