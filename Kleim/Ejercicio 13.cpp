/*
13)	Un comercio de ropas lanza una “promo” por fin de temporada
consistente en diversos descuentos, según los tipos de pagos que se efectúan.
Si se pagan al contado el descuento es del 20% sobre el total. Si se paga con
tarjeta de crédito, se tiene 30% de descuento. Hacer un pseudocódigo que lea
el total de la venta y permita imprimir el descuento correspondiente y el
total a pagar, de acuerdo al descuento asignado.
*/
#include <iostream>
using namespace std;
int main() {
    float total, descuento, totalPagar;
    int tipoPago;
    cout << "Ingrese el total de la venta: ";
    cin >> total;
    cout << "Ingrese el tipo de pago (1: Contado, 2: Tarjeta de credito): ";
    cin >> tipoPago;
    switch (tipoPago) {
        case 1:
            descuento = total * 0.20;
            break;
        case 2:
            descuento = total * 0.30;
            break;
        default:
            cout << "Tipo de pago no valido." << endl;
            while (tipoPago != 1 && tipoPago != 2) {
                cout << "Ingrese el tipo de pago (1: Contado, 2: Tarjeta de credito): ";
                cin >> tipoPago;
            }
            if (tipoPago == 1) {
                descuento = total * 0.20;
            } else if (tipoPago == 2) {
                descuento = total * 0.30;
            }
            break; 
    }
    cout << "Descuento: " << descuento << endl;
    totalPagar = total - descuento;
    cout << "Total a pagar: " << totalPagar << endl;
    return 0;
}