/*
4)	Crear y cargar un vector B con números pares mayores que 10. Imprimir el vector.
*/
#include <iostream>
#include <cstdlib> // Para srand y rand
#include <ctime>   // Para time
using namespace std;
int main() {
    srand(time(0)); // Inicializamos la semilla para números aleatorios
    int N = rand() % 10;; // Definimos la variable para la dimensión del vector y le asignamos un valor
    int B[N]; // Declaramos el vector A con N elementos
    int num;
    cout << "Vector B de " << N << " elementos: " << endl;
    for (int i = 0; i < N; i++) {
        num = 10 + rand() % 91; // Cargamos el vector con números aleatorios entre 20 y 100
        if (num % 2 == 0) { // Verificamos si el número es par y mayor que 10
            B[i] = num; // Asignamos el número al vector B
        } else { // Si no cumple la condición, le pasamos al siguiente valor positivo
            B[i] = num + 1; // Si es impar, le sumamos 1 para hacerlo par
        }    
        cout << "[" << B[i] << "] "; // Imprimimos cada elemento del vector
    }
    /*
    En caso de querer imprimir el vector por separado de la carga
    for (int i = 0; i < N; i++) {
        cout << B[i] << " "; // Imprimimos el vector cargado
    }
    */
    return 0;
}