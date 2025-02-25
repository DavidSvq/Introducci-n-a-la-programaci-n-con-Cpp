/*Desarrolla un programa que genere un array de 5 elementos aleatorios
pares y los guarde un array.*/
#include <iostream>
#include <ctime>
using namespace std;
int main(){
    int array[5];
    srand(time(NULL));
    for (int i = 0; i < 5; i++)
    {
        array[i] = rand() % 100;
        cout << array[i] << "  ";
    }
   return 0; 
}