/*
6)	Hacer un programa que permita crear un vector V, cargar con números al azar hasta
100. Imprimir el vector, junto con el menor y mayor valor generado.
*/
#include <iostream>
#include <cstdlib> // Para srand y rand
#include <ctime>   // Para time
using namespace std;
int main() {
    srand(time(0)); // Inicializamos la semilla para números aleatorios
    int N = rand() % 10 + 1; // Definimos la variable para la dimensión del vector y le asignamos un valor
    int V[N]; // Declaramos el vector A con N elementos
    int mayor = 0, menor = 0; // Declaramos las variables para los números y contadores
    cout << "Vector B de " << N << " elementos: " << endl;
    for (int i = 0; i < N; i++) {
        V[i] = rand() % 100 + 1; // Cargamos el vector con números aleatorios entre 1 y 100
        if (i == 0) { // Si es el primer elemento, lo asignamos como mayor y menor
            mayor = V[i];
            menor = V[i];
        } else { // Si no es el primer elemento, comparamos para encontrar el mayor y menor
            if (V[i] > mayor) {
                mayor = V[i]; // Actualizamos el mayor si encontramos un número más grande
            }
            if (V[i] < menor) {
                menor = V[i]; // Actualizamos el menor si encontramos un número más pequeño
            }
        }
        cout << "[" << V[i] << "] "; // Imprimimos cada elemento del vector
    }
    cout << endl; // Imprimimos un salto de línea para mejor presentación
    cout << "El numero mayor es: " << mayor << endl; // Imprimimos la cantidad de números pares
    cout << "El numero menor es: " << menor << endl; // Imprimimos la cantidad de números impares
    /*
    En caso de querer imprimir el vector por separado de la carga
    for (int i = 0; i < N; i++) {
        cout << B[i] << " "; // Imprimimos el vector cargado
    }
    */
    return 0;
}