/*
2)	Crear y cargar un vector A con 20 elementos aleatorios hasta 50. Imprimir el vector.
*/
#include <iostream>
#include <cstdlib> // Para srand y rand
#include <ctime>   // Para time
using namespace std;
int main() {
    const int DIM = 20; // Definimos la constante para la dimensión del vector
    int A[DIM]; // Declaramos el vector A con 10 elementos
    for (int i = 0; i < DIM; i++)
    {
        A[i] = rand() % 50; // Cargamos el vector con números aleatorios entre 0 y 99
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