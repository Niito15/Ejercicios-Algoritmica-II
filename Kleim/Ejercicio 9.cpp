/*
9)	En un pseudocódigo, leer los minutos usados por un usuario de una cabina
telefónica, teniendo en cuenta que, si se habla solamente 1 minuto, se paga 500 Gs,
caso contrario se paga los 500Gs, más 300 Gs. por cada minuto adicional.
Imprime los minutos utilizados y el monto a pagar. 
*/
#include <iostream>
using namespace std;
int main() {
    int minutos, total;
    cout <<"Ingrese la cantidad de minutos usados en la cabina"<<endl;
    cin >> minutos;
    if (minutos == 1) {
        total = 500;
    } else if (minutos > 1) {
        total = 500 + (300 * (minutos - 1));
    }
    return 0;
}