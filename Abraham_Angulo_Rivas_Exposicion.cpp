
/*

8- El usuario introduce tres numeros enteros y el progarama se encargará de decir cual de los tres es el del medio

*/
#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // Solicitar los 3 números
    cout << "Ingrese el primer número: ";
    cin >> a;
    cout << "Ingrese el segundo número: ";
    cin >> b;
    cout << "Ingrese el tercer número: ";
    cin >> c;

    int medio;

    // Verificar cuál es el número del medio
    if ((a > b && a < c) || (a < b && a > c)) {
        medio = a;
    } else if ((b > a && b < c) || (b < a && b > c)) {
        medio = b;
    } else {
        medio = c;
    }

    cout << "El número del medio es: " << medio << endl;

    return 0;
}