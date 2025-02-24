//15. Desarrolla un programa que muestre lo siguiente por pantalla
// ZYXWVUTSRQPONMLKJIHGFEDCBA
// YXWVUTSRQPONMLKJIHGFEDCBA
// XWVUTSRQPONMLKJIHGFEDCBA
// WVUTSRQPONMLKJIHGFEDCBA
// VUTSRQPONMLKJIHGFEDCBA
// UTSRQPONMLKJIHGFEDCBA
// TSRQPONMLKJIHGFEDCBA
// SRQPONMLKJIHGFEDCBA
// RQPONMLKJIHGFEDCBA
// QPONMLKJIHGFEDCBA
// PONMLKJIHGFEDCBA
// ONMLKJIHGFEDCBA
// NMLKJIHGFEDCBA
// MLKJIHGFEDCBA
// LKJIHGFEDCBA
// KJIHGFEDCBA
// JIHGFEDCBA
// IHGFEDCBA
// HGFEDCBA
// GFEDCBA
// FEDCBA
// EDCBA
// DCBA
// CBA
// BA
// A

#include <iostream>
using namespace std;
int main(){
    //VALOR EN LA TABLA ASCII PARA A=65 Y PARA Z=90.
    char ABC = 90;
    for (char i = ABC; i >= 65; i--)
    {
        for (char i = ABC; i >= 65; i--)
        {   
            cout << i;  
        }
    ABC--;//DECREMENTO ABC EN 1 PARA QUE EL BUCLE SE REPITA CON UN VALOR CHAR MENOS(UNA LETRA MENOS).
    cout << endl;
    }
    cout << endl << "Programa finalizado.";
    return 0;
}