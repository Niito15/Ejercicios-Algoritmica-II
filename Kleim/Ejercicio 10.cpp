/*
10)	Se tienen como datos el nombre, el sueldo base y la cantidad de
hijos de un empleado. Crear un pseudocódigo para calcular el sueldo a
cobrar por el empleado. Si en la empresa donde trabaja recibe una bonificación
del 10% sobre su sueldo si tiene más de dos hijos.
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
   int hijos;
    float sueldoBase, sueldoTotal, bonificacion;
    string nombre;
    cout << "Ingrese el nombre del empleado: ";
    getline(cin, nombre);
    cout << "Ingrese el sueldo base del empleado: ";
    cin >> sueldoBase;
    cout << "Ingrese la cantidad de hijos del empleado: ";
    cin >> hijos;
    if (hijos > 2) {
        bonificacion = sueldoBase * 0.10; // 10% de bonificación
    } else {
        bonificacion = 0; // Sin bonificación
    }
    sueldoTotal = sueldoBase + bonificacion; // Sueldo total
    cout << "El sueldo total a cobrar por " << nombre << " es: " << sueldoTotal << endl;
    cout << "La bonificacion es: " << bonificacion << endl;
    return 0;
}