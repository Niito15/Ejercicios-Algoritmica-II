/*
1)	Dimensionar un vector A con 10 elementos. Imprimir el vector cargado.
*/
#include <iostream>
#include <cstdlib> // Para srand y rand
#include <ctime>   // Para time
using namespace std;
int main() {
    const int DIM = 10; // Definimos la constante para la dimensión del vector
    int A[DIM]; // Declaramos el vector A con 10 elementos
    for (int i = 0; i < DIM; i++)
    {
        A[i] = rand() % 100; // Cargamos el vector con números aleatorios entre 0 y 99
        cout << "[" << A[i] << "] "; // Imprimimos cada elemento del vector
    }
    /*
    En caso de querer imprimir el vector por separado de la carga
    for (int i = 0; i < DIM; i++) {
        cout << A[i] << " "; // Imprimimos el vector cargado
    }
    */
    return 0;
}