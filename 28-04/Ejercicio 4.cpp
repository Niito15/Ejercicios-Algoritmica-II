/*
4)	Simular el lanzamiento de una moneda al aire y que pare cuando salgan 3
caras seguidas. Imprimir el número de tiradas realizadas.*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0)); // Inicializa la semilla para la generación de números aleatorios
    int tiradas = 0; // Contador de tiradas
    int carasConsecutivas = 0; // Contador de caras consecutivas
    int moneda = srand() % 2; // Genera un número aleatorio entre 0 y 1 (0 = cruz, 1 = cara)
    while (carasConsecutivas < 3) { // Mientras no tengamos 3 caras consecutivas
        moneda = rand() % 2; // Genera un número aleatorio entre 0 y 1 (0 = cruz, 1 = cara)
        tiradas++; // Incrementa el contador de tiradas
        if (moneda == 1) { // Si sale cara
            carasConsecutivas++; // Incrementa el contador de caras consecutivas
        } else { // Si sale cruz
            carasConsecutivas = 0; // Reinicia el contador de caras consecutivas
        }
    }
    cout << "Se realizaron " << tiradas << " tiradas para obtener 3 caras consecutivas." << endl; // Imprime el número de tiradas realizadas
    return 0;
}