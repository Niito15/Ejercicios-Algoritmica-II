/*
1)	Ingresar dos números. Intercambiar sus valores utilizando una variable auxiliar.
*/
#include <iostream>
using namespace std;
int main() {
    int num1, num2, aux;
    cout << "Ingrese el primer numero: ";  
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Los numeros ingresados son: " << num1 << " y " << num2 << endl;
    aux = num1; // Guardamos el valor de num1 en aux
    num1 = num2; // Asignamos el valor de num2 a num1
    num2 = aux; // Asignamos el valor de aux (original num1) a num2
    cout << "Los numeros intercambiados son: " << num1 << " y " << num2 << endl;
    return 0;
}