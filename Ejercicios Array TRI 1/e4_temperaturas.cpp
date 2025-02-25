/*Desarrolla un programa que almacene las temperaturas de los 31 días
de diciembre, deberá pedir la de cada día por pantalla, cuando estén todas, el
programa elaborará una estadística donde queden reflejadas la máxima, la
mínima y la media del mes.*/
#include <iostream>
using namespace std;
int main(){
    int temperatura_mes[31];
    int dia = 1, temperatura_max, temperatura_min, suma = 0, temperatura_media;
    for (int i = 0; i < 31; i++)
    {
        cout << "Introduce la temperatura del dia " << dia << ": ";
        cin >> temperatura_mes[i];
        suma += temperatura_mes[i];
        dia ++;
    }
    temperatura_max = temperatura_mes[0];
    temperatura_min = temperatura_mes[0];
    for (int i = 0; i < 31; i++)
    {
        if (temperatura_mes[i] > temperatura_max)
        {
            temperatura_max = temperatura_mes[i];
        }
        if (temperatura_mes[i] < temperatura_min)
        {
            temperatura_min = temperatura_mes[i];
        }
    }
    temperatura_media = suma / 31;
    cout << "La max. fue " << temperatura_max << endl;
    cout << "La min. fue " << temperatura_min << endl;
    cout << "La media fue " << temperatura_media;
    return 0;    
}