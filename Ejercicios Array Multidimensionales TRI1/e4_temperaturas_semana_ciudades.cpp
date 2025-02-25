/*Crea un programa que me pida el nombre de dos ciudades, tras esto,
me pida las temperaturas de los 7 días de la semana, y posteriormente
que calcule la media de temperatura de cada una de las ciudades*/

#include <iostream>
using namespace std;
int main(){
    string ciudades[2];
    string dias_de_la_semana[7] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
    int temperatura_dias_semana_ciudades[7][2];
    int suma_temperaturas[2] = {0}, media_semanal_ciudades[2];
    cout << "Introduce una ciudad : ";
    cin >> ciudades[0];
    cout << "Introduce otra ciudad : ";
    cin >> ciudades[1];
    system("cls");
    for (int i = 0; i < 7; i++)
    {
        cout << "Introduce la temperatura del " << dias_de_la_semana[i] << " en " << ciudades[0] << ": ";
        cin >> temperatura_dias_semana_ciudades[i][0];
        suma_temperaturas[0] += temperatura_dias_semana_ciudades[i][0];
    }
    system("cls");
    for (int i = 0; i < 7; i++)
    {
        cout << "Intoduce la temperatura del " << dias_de_la_semana[i] << " en " << ciudades[1] << ": ";
        cin >> temperatura_dias_semana_ciudades[i][1];
        suma_temperaturas[1] += temperatura_dias_semana_ciudades[i][1];
    }
    system("cls");
    for (int i = 0; i < 2; i++)
    {
        media_semanal_ciudades[i] = suma_temperaturas[i] / 7;
        cout << "La temperatura media de la semana en " << ciudades[i] << " fue de " << media_semanal_ciudades[i] << " grados." << endl;
    }
    return 0;
}