//Haz un programa como si fueras una tienda online. Introduciendo el 
// código de un articulo, nos dirá el precio. Nos preguntará si queremos 
// comprar y cuantas unidades del mismo, para finalmente decirnos cuanto
// debemos pagar.

#include <iostream>
using namespace std;
int main(){
    int producto, comprar, precio, unidades, total_compra;
    cout<<"\t\tELIJA EL PRODUCTO DESEADO:\n\n";
    cout<<"\t\tPRODUCTO\t\t\tCODIGO\n\n";
    cout<<"\t\tCAMISA........................... 1\n";
    cout<<"\t\tCINTURON......................... 2\n";
    cout<<"\t\tZAPATOS.......................... 3\n";
    cout<<"\t\tPANTALON......................... 4\n";
    cout<<"\t\tCALCETINES....................... 5\n";
    cout<<"\t\tFALDAS........................... 6\n";
    cin >> producto;
    switch (producto)
    {
    case 1:
        precio=50;
        cout << "La camisa vale 50" << endl;
        cout << "Si desea comparla pulse 1" << endl;
        cin >> comprar;
        if (comprar==1)
        {
            cout << "¿Cuántas quiere?" << endl;
            cin >> unidades;
            total_compra=precio*unidades;
            cout << "El total por " << unidades << " unidades es " << total_compra;
        } 
        break;
    case 2:
        precio=10;
        cout << "El cinturon vale 10" << endl;
        cout << "Si desea comparla pulse 1" << endl;
        cin >> comprar;
        if (comprar==1)
        {
            cout << "¿Cuántos quiere?" << endl;
            cin >> unidades;
            total_compra=precio*unidades;
            cout << "El total por " << unidades << " unidades es " << total_compra;
        } 
        break;
    case 3:
        precio=40;
        cout << "Los zapatos valen 40" << endl;
        cout << "Si desea comparla pulse 1" << endl;
        cin >> comprar;
        if (comprar==1)
        {
            cout << "¿Cuántos quiere?" << endl;
            cin >> unidades;
            total_compra=precio*unidades;
            cout << "El total por " << unidades << " unidades es " << total_compra;
        } 
        break;
    case 4:
        precio=30;
        cout << "El pantalon vale 30" << endl;
        cout << "Si desea comparla pulse 1" << endl;
        cin >> comprar;
        if (comprar==1)
        {
            cout << "¿Cuántos quiere?" << endl;
            cin >> unidades;
            total_compra=precio*unidades;
            cout << "El total por " << unidades << " unidades es " << total_compra;
        } 
        break;
    case 5:
        precio=5;
        cout << "Los calcetines vale 5" << endl;
        cout << "Si desea comparla pulse 1" << endl;
        cin >> comprar;
        if (comprar==1)
        {
            cout << "¿Cuántos quiere?" << endl;
            cin >> unidades;
            total_compra=precio*unidades;
            cout << "El total por " << unidades << " unidades es " << total_compra;
        } 
        break;
    case 6:
        precio=25;
        cout << "La falda vale 25" << endl;
        cout << "Si desea comparla pulse 1" << endl;
        cin >> comprar;
        if (comprar==1)
        {
            cout << "¿Cuántas quiere?" << endl;
            cin >> unidades;
            total_compra=precio*unidades;
            cout << "El total por " << unidades << " unidades es " << total_compra;
        } 
        break;
    default:
        break;
    }
    return 0;
}