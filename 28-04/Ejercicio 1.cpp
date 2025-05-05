/*
1)	Simular el lanzamiento de una moneda al aire e
imprimir si ha salido cara o cruz. Repetir el proceso tantas veces se desee.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0)); // Inicializa la semilla para la generación de números aleatorios
    char continuar = 's'; // Variable para controlar el bucle
    int moneda = rand() % 2; // Genera un número aleatorio entre 0 y 1
    while (continuar == 's') { // Bucle para repetir el lanzamiento
        moneda = rand() % 2; // Genera un nuevo número aleatorio
        if (moneda == 0) {
            cout << "Ha salido cara." << endl; // Si el número es 0, sale cara
        } else {
            cout << "Ha salido cruz." << endl; // Si el número es 1, sale cruz
        }
        cout << "¿Desea lanzar la moneda de nuevo? (s/n): ";
        cin >> continuar; // Pregunta al usuario si desea continuar
    }
    cout << "Gracias por jugar." << endl; // Mensaje de despedida
    return 0;
}