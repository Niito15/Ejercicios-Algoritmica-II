/*
7)	Crear un pseudocódigo que permita imprimir la tabla
de multiplicar de los 10 primeros números.
*/
#include <iostream>
using namespace std;
int main() {
    int i, j;
    for (i = 1; i <= 10; i++) {
        cout << "Tabla de multiplicar del " << i << ":" << endl;
        for (j = 1; j <= 10; j++) {
            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout << endl;
    }
    return 0;
}