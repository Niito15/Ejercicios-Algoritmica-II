#include <iostream>
#include <windows.h>    // Para gotoxy y Sleep
#include <cstdlib>      // Para rand() y system()
#include <ctime>        // Para time()
using namespace std;
// Función para mover el cursor a una posición específica en la consola
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x; // Columna
    coord.Y = y; // Fila
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    const int meta = 60; // Posición de la meta en la consola
    int pos1 = 0;        // Posición del caballo 1
    int pos2 = 0;        // Posición del caballo 2

    // Inicializar la semilla para números aleatorios
  srand((unsigned) time(NULL)); 

    // Limpiar la pantalla
    system("cls");

    // Dibujar la meta
    gotoxy(meta, 0); cout << "| META";
    gotoxy(meta, 1); cout << "| META";

    // Bucle principal de la carrera
    while (pos1 < meta && pos2 < meta) {
        // Generar avance aleatorio (1 o 2 pasos) para cada caballo
        int avance1 = 1 + rand() % 2;
        int avance2 = 1 + rand() % 2;

        // Actualizar posiciones
        pos1 += avance1;// pos1=pos1+avance1
        pos2 += avance2;

        // Asegurar que no sobrepasen la meta
        if (pos1 > meta) pos1 = meta;
		
        if (pos2 > meta) pos2 = meta;

        // Mostrar los caballos en sus nuevas posiciones
        gotoxy(pos1, 0); cout << "??";
        gotoxy(pos2, 1); cout << "??";

        // Pausa para visualizar el avance
        Sleep(200);
    }

    // Determinar y mostrar el resultado
    gotoxy(0, 3);
    if (pos1 >= meta && pos2 >= meta) {
        std::cout << "¡Empate!";
    } else if (pos1 >= meta) {
        std::cout << "¡Caballo 1 gana!";
    } else {
        std::cout << "¡Caballo 2 gana!";
    }

    // Esperar entrada para finalizar
    gotoxy(0, 5);
    system("pause");
    return 0;
}
