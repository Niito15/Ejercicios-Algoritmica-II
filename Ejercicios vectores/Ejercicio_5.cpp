/*
5)	Hacer un programa que permita dimensionar un vector con no menos de 20 elementos.
Buscar e imprimir la cantidad de elementos pares e impares cargados. Imprimir el vector.
*/
#include <iostream>
#include <cstdlib> // Para srand y rand
#include <ctime>   // Para time
using namespace std;
int main() {
    srand(time(0)); // Inicializamos la semilla para números aleatorios
    int N = 20 + rand() % 81;; // Definimos la variable para la dimensión del vector y le asignamos un valor
    int B[N]; // Declaramos el vector A con N elementos
    int cantPares = 0, cantImpares = 0; // Declaramos las variables para los números y contadores
    cout << "Vector B de " << N << " elementos: " << endl;
    for (int i = 0; i < N; i++) {
        B[i] = rand() % 100 + 1; // Cargamos el vector con números aleatorios entre 1 y 100
        if (B[i] % 2 == 0) { // Verificamos si el número es par para sumar a cantPares
            cantPares++;
        } else { // Sumamos en cantImpares si el número es impar
            cantImpares++;
        }    
        cout << "[" << B[i] << "] "; // Imprimimos cada elemento del vector
    }
    cout << endl; // Imprimimos un salto de línea para mejor presentación
    cout << "Cantidad de elementos pares: " << cantPares << endl; // Imprimimos la cantidad de números pares
    cout << "Cantidad de elementos impares: " << cantImpares << endl; // Imprimimos la cantidad de números impares
    /*
    En caso de querer imprimir el vector por separado de la carga
    for (int i = 0; i < N; i++) {
        cout << B[i] << " "; // Imprimimos el vector cargado
    }
    */
    return 0;
}