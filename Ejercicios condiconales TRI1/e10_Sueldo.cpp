//Hacer un programa para ayudar a un trabajador a saber cuál será su sueldo
// semanal, se sabe que, si trabaja 40 horas o menos, se le pagará 20€ por 
// hora, pero si trabaja más de 40 horas entonces las horas extras se le 
// pagarán a 25€ por hora. ¿Cuánto cobra a final de mes?

#include <iostream>
using namespace std;
int main(){
    int horas_trabajadas, sueldo_semanal, horas_extras;
    cout << "Introduce las horas trabajadas en la semana: " << endl;
    cin >> horas_trabajadas;
    if (horas_trabajadas<=40)
    {
        sueldo_semanal=horas_trabajadas*20;
        cout << "Esta semana has ganado " << sueldo_semanal << endl;
        sueldo_semanal=sueldo_semanal*4;
        cout << "El promedio mensual seria " << sueldo_semanal;
    }
    else
    {
        horas_extras=horas_trabajadas-40;
        sueldo_semanal=(horas_trabajadas*20)+(horas_extras*25);
        cout << "Esta semana has ganado " << sueldo_semanal << endl;
        sueldo_semanal=sueldo_semanal*4;
        cout << "El promedio mensual seria " << sueldo_semanal;
    }
    

}