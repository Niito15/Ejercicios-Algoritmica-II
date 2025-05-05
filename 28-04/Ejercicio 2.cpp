/*
2)	Simular cien tiradas de un dado y contar las veces que aparece el número 6.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0)); // Inicializa la semilla para la generación de números aleatorios
    int contadorSeis = 0; // Contador para el número de veces que aparece el 6
    int dado = srand() % 6 + 1; // Genera un número aleatorio entre 1 y 6
    for (int i = 0; i < 100; i++) { // Realiza 100 tiradas
        dado = rand() % 6 + 1; // Genera un número aleatorio entre 1 y 6
        if (dado == 6) { // Verifica si el número es 6
            contadorSeis++; // Incrementa el contador si es así
        }
    }
    cout << "El número 6 apareció " << contadorSeis << " veces en 100 tiradas." << endl;
    return 0;
}