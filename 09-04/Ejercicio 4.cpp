/*
4)	Crear un programa que permita ingresar un número par menor a 20.
Imprimir su tabla de multiplicar.
Observación: en este ejercicio lo nuevo es la validación,
ya que pide un numero par menor a 20, por lo tanto, debemos
utilizar un ciclo para validar “Mientras” y como tenemos dos condiciones:
Condición 1: el numero debe ser par
Condición 2: el numero debe ser menor a 20
Hay que unir las condiciones a través de un término de enlace que
puede ser OR o AND No olviden que debo hacerme la pregunta:
¿Qué es lo que no quiero que ocurra? Para entablar mi condición 

*/
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Ingrese un numero par menor a 20: ";
    cin >> num;
    while (num % 2 != 0 || num >= 20) {
        cout << "Error. Ingrese un numero par menor a 20: ";
        cin >> num;
    }
    cout << "Tabla de multiplicar del " << num << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
    return 0;
}