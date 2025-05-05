/*
2)	Ingresar dos números. Intercambiar sus valores sin utilizar auxiliar.
*/
#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Antes del intercambio: num1 = " << num1 << ", num2 = " << num2 << endl;
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout << "Despues del intercambio: num1 = " << num1 << ", num2 = " << num2 << endl;
    return 0;
}