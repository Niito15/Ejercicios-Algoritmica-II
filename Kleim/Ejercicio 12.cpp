/*
12)	En una cadena de supermercados se lanza una promoción para el área
de frutas y verduras, que establece que hasta un peso de 3 kg se paga
el precio normal del producto. Pero pasando dicho kilaje, se paga 20%
menos por el total del producto. Hacer un pseudocódigo que permita cargar
el nombre del producto, el kilaje y su precio por kg. Para efectuar el
cálculo del total a pagar.
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    string nombreProducto;
    float kilaje, precioPorKg, totalAPagar;
    cout << "Ingrese el nombre del producto: ";
    cin >> nombreProducto;
    cout << "Ingrese el kilaje del producto (kg): ";
    cin >> kilaje;
    cout << "Ingrese el precio por kg del producto: ";
    cin >> precioPorKg;
    if (kilaje <= 3) {
        totalAPagar = kilaje * precioPorKg;
    } else {
        totalAPagar = (kilaje * precioPorKg)-(kilaje*0.2); // 20% de descuento
    }
    cout << "El total a pagar por " << nombreProducto << " es: Gs" << totalAPagar << endl;
    return 0;
}