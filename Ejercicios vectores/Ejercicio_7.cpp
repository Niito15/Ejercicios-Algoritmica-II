/*
7)	Dimensionar un vector A, B y C, además crear a partir de los anteriores,
otro vector S que contendrá los elementos de los vectores
(A, B y C) ordenados en forma consecutiva. Imprimir los vectores en cuestión.
*/
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
int main () {
    srand(time(0)); //Inicializar semilla
    
    //Declaro variables para la dimension Fisica de cada vector
    int dimFA, dimFB, dimFC;
    //Solicito al usuario la dimension de cada vector
    cout << "Ingrese la dimension del vector A: ";
    cin >> dimFA;
    cout << "Ingrese la dimension del vector B: ";
    cin >> dimFB;
    cout << "Ingrese la dimension del vector C: ";
    cin >> dimFC;
    //Declaro los vectores
    vector<int> A(dimFA), B(dimFB), C(dimFC), S;
    
    //Lleno los vectores A, B y C con numeros aleatorios
    for (int i = 0; i < dimFA; i++)
    {
        A[i] = rand() % 100 + 1; //Numeros entre 1 y 100
    }
    for (int i = 0; i < dimFB; i++)
    {
        B[i] = rand() % 100 + 1; //Numeros entre 1 y 100
    }
    for (int i = 0; i < dimFC; i++)
    {
        C[i] = rand() % 100 + 1; //Numeros entre 1 y 100
    }

    //Lleno el vector S con los elementos de A, B y C
    for (int i = 0; i < dimFA; i++)
    {
        S.push_back(A[i]); //Cargo los elementos de A
    }
    for (int i = 0; i < dimFB; i++)
    {
        S.push_back(B[i]); //Cargo los elementos de B
    }
    for (int i = 0; i < dimFC; i++)
    {
        S.push_back(C[i]); //Cargo los elementos de C
    }

    //Imprimo los vectores A, B, C y S
    cout << "Vector A de " << dimFA << " elementos: ";
    for (int i = 0; i < dimFA; i++)
    {
        cout << "[" << A[i] << "] "; //Imprimo los elementos de A
    }
    cout << endl;
    cout << "Vector B de " << dimFB << " elementos: ";
    for (int i = 0; i < dimFB; i++)
    {
        cout << "[" << B[i] << "] "; //Imprimo los elementos de B
    }
    cout << endl;
    cout << "Vector C de " << dimFC << " elementos: ";
    for (int i = 0; i < dimFC; i++)
    {
        cout << "[" << C[i] << "] "; //Imprimo los elementos de C
    }
    cout << endl;
    cout << "Vector A de " << S.size() << " elementos: ";
    for (int i = 0; i < S.size(); i++)
    {
        cout << "[" << S[i] << "] "; //Imprimo los elementos de S
    }
    return 0;
}