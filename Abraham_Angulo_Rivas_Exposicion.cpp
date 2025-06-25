
/*

8- El usuario introduce tres numeros enteros y el progarama se encargará de decir cual de los tres es el del medio

*/
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    int medio;
    // Pedir los 3 números
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    cout << "Ingrese el tercer número: ";
    cin >> num3;
    // Verificar cuál es el número del medio
    if ((num1 > num2 && num1 < num3) || (num1 < num2 && num1 > num3)) {
        medio = num1;
    } else if ((num2 > num1 && num2 < num3) || (num2 < num1 && num2 > num3)) {
        medio = num2;
    } else {
        medio = num3;
    }
    cout << "El número del medio es: " << medio << endl;
    return 0;
}
