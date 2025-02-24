//Que muestre un menú donde las opciones sean “Equilátero”, “Isósceles” y “Escaleno”,
//pida una opción y calcule el perímetro del triángulo seleccionado.

#include <iostream>
using namespace std;
int main(){
    int opcion, l1, l2, l3, perimetro;
    cout << "Marque una opcion:" << endl;
    cout << "1. Equilatero." << endl;
    cout << "2. Isósceles." << endl;
    cout << "3. Escaleno." << endl;
    cin >> opcion;
        switch (opcion)
        {
        case 1:
            cout << "Introduce los lados: " << endl;
            cin >> l1;
            perimetro=l1*3;
            cout << "Su perimetro es " << perimetro;
            break;
        case 2:
            cout << "Introduce los lados iguales: " << endl;
            cin >> l1;
            cout << "Introduce el otro lado: " << endl;
            cin >> l2;
            perimetro=l1+l1+l2;
            cout << "Su perimetro es " << perimetro;
            break;
        case 3:
            cout << "Introduce el primer lado: " << endl;
            cin >> l1;
            cout << "Introduce el segundo lado: " << endl;
            cin >> l2;
            cout << "Introduce el tercer lado: " << endl;
            cin >> l3;
            perimetro=l1+l2+l3;
            cout << "Su perimetro es " << perimetro;
            break;
        default:
            cout << "No selecciono ninguno.";
            break;
        }
    return 0;    
}