/*
6)	Crear un pseudocódigo que permita ingresar un número positivo cualquiera,
menor que 20. Imprimir su factorial, en forma de serie.
Observación: la factorial es una serie de números que empieza a
partir del uno, y cuyo valor va incrementándose multiplicando por
el resultado anterior. Para saber más de la factorial.
https://factorialhr.es/numero-funcion-factorial En el ejercicio pide,
suponiendo que para una variable “n” se ingrese un valor. Ejemplo n = 5,
el proceso que buscamos es el siguiente:
Numero ingresado: 5
1! = 1	Observen el valor donde se debe iniciar, no puede ser cero, porque todo valor
multiplicado por cero
2! = 2	da cero
3! = 6
4! = 24
5! = 120
Por lo tanto lo que buscamos es: c = c + 1 y además f = c * c.
Vamos a implementarlo en un ciclo “Mientras”
*/
#include <iostream>
using namespace std;
int main() {
    int num, factorial = 1;
    cout << "Ingrese un numero positivo menor que 20: ";
    cin >> num;
    if (num < 0 || num >= 20) {
        cout << "Numero invalido. Debe ser positivo y menor que 20." << endl;
    } else {
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
    }
    cout << "El factorial de " << num << " es: " << factorial << endl;
    return 0;
}