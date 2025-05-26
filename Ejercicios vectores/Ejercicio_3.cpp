/*
3)	Crear y cagar un vector N con no menos de 20 elementos al azar
entre el 20 y 100. Imprimir el vector.
*/
#include <iostream>
#include <cstdlib> // Para srand y rand
#include <ctime>   // Para time
using namespace std;
int main() {
    srand(time(0)); // Inicializamos la semilla para números aleatorios
    const int N = 20 + rand() % 81;; // Definimos la variable para la dimensión del vector y le asignamos un valor
    int A[N]; // Declaramos el vector A con N elementos
    cout << "Vector A de " << N << " elementos: " << endl;
    for (int i = 0; i < N; i++)
    {
        A[i] = rand() % 81 + 20; // Cargamos el vector con números aleatorios entre 20 y 100
        cout << "[" << A[i] << "] "; // Imprimimos cada elemento del vector
    }
    /*
    En caso de querer imprimir el vector por separado de la carga
    for (int i = 0; i < N; i++) {
        cout << A[i] << " "; // Imprimimos el vector cargado
    }
    */
    return 0;
}