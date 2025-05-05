/*
10)	Un alumno cuenta con ocho notas parciales en el curso de Diseño de
algoritmos, se requiere un algoritmo para calcular el promedio de dichas
notas, y escribir si acredita o no el curso considerando que con promedio en el
rango de 7.0 a 10 se acredita
*/
#include <iostream>
using namespace std;
int main() {
    int nota;
    float promedio = 0;
    for (int i = 0; i < 8; i++) {
        cout << "Ingrese la nota " << i + 1 << ": ";
        cin >> nota;
        promedio += nota;
    }
    promedio /= 8; // Calcular el promedio
    cout << "El promedio es: " << promedio << endl;
    if (promedio >= 7.0 && promedio <= 10.0) {
        cout << "Acredita el curso." << endl;
    } else {
        cout << "No acredita el curso." << endl;
    }
    return 0;
}