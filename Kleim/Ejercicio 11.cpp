/*
11)	Se tienen como datos: El nombre del empleado y su sueldo bruto a
cobrar. Se desea saber el sueldo neto a cobrar por un empleado,
sabiendo que tiene un descuento del 5% si su salario es mayor a 700mil,
en caso contrario no tiene descuento. Hacer un pseudocódigo para imprimir
el nombre del empleado, descuento y su sueldo a cobrar.
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    string nombreEmpleado;
    float sueldoBruto, descuento, sueldoNeto;
    cout << "Ingrese el nombre del empleado: ";
    getline(cin, nombreEmpleado);
    cout << "Ingrese el sueldo bruto a cobrar: ";
    cin >> sueldoBruto;
    if (sueldoBruto > 700000) {
        descuento = sueldoBruto * 0.05;
    } else {
        descuento = 0;
    }
    sueldoNeto = sueldoBruto - descuento;
    cout << "Nombre del empleado: " << nombreEmpleado << endl;
    cout << "Sueldo bruto: " << sueldoBruto << endl;
    cout << "Descuento: " << descuento << endl;
    cout << "Sueldo a cobrar: " << sueldoNeto << endl;
    return 0;
}