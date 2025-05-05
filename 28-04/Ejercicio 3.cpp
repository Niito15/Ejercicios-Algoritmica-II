/*
3)	Simular cien tiradas de dos dados y contar las veces que entre los dos suman 10.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0)); // Inicializa la semilla para la generación de números aleatorios
    int contadorDiez = 0; // Contador para el número de veces que aparece el 6
    int dado1 = srand() % 6 + 1; // Genera un número aleatorio entre 1 y 6
    int dado2 = srand() % 6 + 1; // Genera un número aleatorio entre 1 y 6
    for (int i = 0; i < 100; i++) { // Realiza 100 tiradas
        dado1 = rand() % 6 + 1; // Genera un número aleatorio entre 1 y 6
        dado2 = rand() % 6 + 1; // Genera un número aleatorio entre 1 y 6
        if ( dado1+dado2 == 10) { // Verifica si el número es 6
            contadorDiez++; // Incrementa el contador si es así
        }
    }
    cout << "El número de veces que entre los dos dados suman 10 es: " << contadorDiez << endl; // Imprime el resultado
    return 0;
}