//Este programa pide primero la cantidad total de compras de una persona. Si la cantidad
// es inferior a 100€, el programa dirá que el cliente no aplica a la promoción. Pero si la
// persona ingresa una cantidad en compras igual o superior a 100€, el programa genera de
// forma aleatoria un número entero del cero al cinco. Si sale 0 no tendrá descuento, si sale
// 1 tendrá un 10% de descuento, si sale 2 un 20%... de manera que el programa mostrará
// un nuevo valor a pagar luego de haber aplicado el descuento.

#include <iostream>
#include <ctime>
using namespace std;
int main(){
    float total_compra;
    int numero_dto;
    cout << "Introducir la cantidad total" << endl;
    cin >> total_compra;
    if (total_compra<100)
    {
        cout << "No tiene descuento. Total " << total_compra;
    }
    else
    {
        srand(time(NULL));
        numero_dto=0+rand()%6;
        cout << numero_dto << endl;
        switch (numero_dto)
        {
        case 0:
            cout << "Vaya no obtuvo descuento. Total " << total_compra;
            break;
        case 1:
            total_compra=total_compra*0.9;
            cout << " Obtuvo 10 por ciento descuento. Total " << total_compra;
            break;
         case 2:
            total_compra=total_compra*0.8;
            cout << " Obtuvo 20 por ciento descuento. Total " << total_compra;
            break;
         case 3:
            total_compra=total_compra*0.7;
            cout << " Obtuvo 30 por ciento descuento. Total " << total_compra;
            break;
         case 4:
            total_compra=total_compra*0.6;
            cout << " Obtuvo 40 por ciento descuento. Total " << total_compra;
            break;
         case 5:
            total_compra=total_compra*0.5;
            cout << " Obtuvo 50 por ciento descuento. Total " << total_compra;
            break;
        default:
            break;
        }
    }
}