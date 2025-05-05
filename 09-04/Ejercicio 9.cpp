/*
9)	( Desafío. 1 P). Ingresar un número positivo. Decir si el mismo es o
no primo con el método de sumas sucesivas.
*/
#include <iostream>
using namespace std;
int main() {
    int num, i, divisor = 0;
    bool primo = true;
    cout << "Ingrese un numero positivo mayor a 1: ";
    cin >> num;
    if (num <= 1) {
        cout << "El numero no es positivo o no es mayor a 1." << endl;
    } else {  
        for (i = 2; i < num; i++) {
            for (int j = 1; j <= i; j++) {
                divisor += i; // Sumar el número i, j veces
                if (divisor == num) {
                    primo = false; // Si el divisor es igual al número, es primo
                    break;
                }
            }
            if (divisor == num) {
                primo = false; // Si el divisor es igual al número, es primo
                break;
            }
            divisor = 0; // Reiniciar divisor para la siguiente iteración
        }
        if (primo) {
            cout << "El numero " << num << " es primo." << endl;
        } else {
            cout << "El numero " << num << " no es primo." << endl;
        }
    }
    return 0;
}