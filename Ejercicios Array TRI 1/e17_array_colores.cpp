/*Desarrolle un programa que tenga un array de 9 elementos, estos serán
9 colores, el programa dispondrá de un mecanismo aleatorio que elija 3 colores
y estos sean distintos.*/

#include <iostream>
#include <ctime>
using namespace std;
int main(){
    string colores[9] = {"blanco", "negro", "rojo", "amarillo", "azul", "morao", "naranja", "rosa", "marron"};
    int color_posicion_aleatoria[3];
    string primer_color, segundo_color, tercer_color;
    srand(time(NULL));
    for (int i = 0; i < 3; i++)
    {
        bool color_distinto;
        do
        {
            color_distinto = true;
            color_posicion_aleatoria[i] = 1 +rand()% 9;
            for (int j = 0; j < i; j++)
            {
                if (color_posicion_aleatoria[i] == color_posicion_aleatoria[j])
                {
                    color_distinto = false;
                }  
            }    
        } while (color_distinto != true);
    }
    primer_color = colores[color_posicion_aleatoria[0]];
    segundo_color = colores[color_posicion_aleatoria[1]]; 
    tercer_color = colores[color_posicion_aleatoria[2]];
    cout << primer_color << endl << segundo_color << endl << tercer_color;
    return 0;
}
