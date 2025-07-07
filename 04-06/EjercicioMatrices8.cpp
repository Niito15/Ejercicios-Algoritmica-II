
/*

8)	Crear y cargar una matriz M. Imprimir la matriz y el perímetro de la misma como se muestra en la figura.

*/
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
    srand(time(0)); // Inicializar la semilla para números aleatorios
    int filas, columnas, perimetro = 0;
    cout << "Ingrese el numero de filas: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas: ";
    cin >> columnas;
    int M[filas][columnas];

    // Inicializar la matriz M
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            M[i][j] = rand() % 50 + 1; // Generar un número aleatorio positivo menor a 10
        }
    }
    // Mostrar la matriz M
    cout << "Matriz B:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "[" << M[i][j] << "] ";
        }
        cout << endl;
    }
    // Calcular el perímetro
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (i == 0 || i == filas - 1 || j == 0 || j == columnas - 1) {
                perimetro += M[i][j];
            }
        }
    }
    // Mostrar el perímetro
    cout << "Perimetro: " << perimetro << endl;
    return 0;
}