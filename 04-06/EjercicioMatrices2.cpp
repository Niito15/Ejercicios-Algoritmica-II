
/*

2)	Crear y cargar un vector M con números al azar entre el 10 y 100. Decir cuántos elementos pares e impares contiene el vector. Imprimir el vector.

*/
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int dimension;
    int pares = 0, impares = 0;
    srand(time(0)); // Inicializar la semilla para números aleatorios
    cout << "Ingrese la dimensión del vector: ";
    cin >> dimension;
    vector<int> M(dimension);
    // Cargar el vector con números aleatorios entre 10 y 100
    for (int i = 0; i < dimension; i++) {
        M[i] = rand() % 91 + 10; // Genera un número entre 10 y 100
        if (M[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }
    // Imprimir el vector
    cout << "Vector M: ";
    for (int i = 0; i < dimension; i++) {
        cout << "[" << M[i] << "] ";
    }
    cout << endl;
    // Imprimir la cantidad de números pares e impares
    cout << "Cantidad de números pares: " << pares << endl;
    cout << "Cantidad de números impares: " << impares << endl;
    return 0;
}