/*
9)	( Desafío. 1 P). Ingresar un número positivo. Decir si el mismo es o
no primo con el método de sumas sucesivas.
*/
#include <iostream>
using namespace std;
int main() {
    int num, i, suma = 0;
    cout << "Ingrese un numero positivo: ";
    cin >> num;
    if (num <= 0) {
        cout << "El numero no es positivo." << endl;
    }
    for (i = 1; i < num; i++) {
        suma += i;
        if (suma == num) {
            cout << "El numero es primo." << endl; 
            break;
        } else if (suma > num) {
            cout << "El numero no es primo." << endl; 
            break;
        }
    }
    return 0;
}