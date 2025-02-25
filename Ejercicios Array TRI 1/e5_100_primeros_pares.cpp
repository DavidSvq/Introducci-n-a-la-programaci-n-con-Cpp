/*Desarrolla un programa que genere un array con los 100 primeros pares*/
#include <iostream>
using namespace std;
int main(){
    int cien_pares[100];
   for (int i = 0; i < 100; i++)
   {
    cien_pares[i] = (i + 1) * 2;
    cout << cien_pares[i] << " ";
   }
   return 0;
}