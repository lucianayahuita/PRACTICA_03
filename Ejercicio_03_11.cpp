// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 6/09/2023
// Fecha modificación: 6/09/2023
// Número de ejericio: 11
// Problema planteado: Realizar el típico juego del 3 en raya, donde habrá dos jugadores que tengan que
//hacer el 3 en raya, los signos serán el X y el O, cuando haya una posición vacía
//habrá un – El tablero de juego, será una matriz de 3×3 de char.
//El juego termina cuando uno de los jugadores hace 3 en raya o si no hay más
//posiciones que poner.
//El juego debe pedir las posiciones donde el jugador actual quiera poner su
//marca, esta debe ser validada y por supuesto que no haya una marca ya puesta.
//Por último mostrar la matriz del juego y muestra al ganador.
#include <iostream>
#include <vector>
int main() {
    std::vector<std::vector<char>> tablero(3, std::vector<char>(3, '-'));
    char jugadorActual = 'X';
    bool juegoTerminado = false;
    while (!juegoTerminado) {
        // Imprimir el tablero actual
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                std::cout << tablero[i][j] << " ";
            }
            std::cout << std::endl;
        }
        // Pedir la posición al jugador actual
        int fila, columna;
        std::cout << "Turno del jugador " << jugadorActual << ". Ingrese la fila y columna (ejemplo: 1 2): ";
        std::cin >> fila >> columna;
        // Verificar si la posición es válida
        if (fila >= 0 && fila < 3 && columna >= 0 && columna < 3 && tablero[fila][columna] == '-') {
            // Colocar la marca del jugador en la posición seleccionada
            tablero[fila][columna] = jugadorActual;
            // Verificar si el jugador ha ganado
            bool ganador = false;
            for (int i = 0; i < 3; i++) {
                if (tablero[i][0] == jugadorActual && tablero[i][1] == jugadorActual && tablero[i][2] == jugadorActual) {
                    ganador = true;
                }
                if (tablero[0][i] == jugadorActual && tablero[1][i] == jugadorActual && tablero[2][i] == jugadorActual) {
                    ganador = true;
                }
            }
            if (tablero[0][0] == jugadorActual && tablero[1][1] == jugadorActual && tablero[2][2] == jugadorActual) {
                ganador = true;
            }
            if (tablero[0][2] == jugadorActual && tablero[1][1] == jugadorActual && tablero[2][0] == jugadorActual) {
                ganador = true;
            }
            if (ganador) {
                // Imprimir el tablero actual y anunciar al ganador
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        std::cout << tablero[i][j] << " ";
                    }
                    std::cout << std::endl;
                }
                std::cout << "¡El jugador " << jugadorActual << " ha ganado!" << std::endl;
                juegoTerminado = true;
            } else {
                // Cambiar al otro jugador
                jugadorActual = (jugadorActual == 'X') ? 'O' : 'X';
            }
        } else {
            std::cout << "Posición inválida. Intente nuevamente." << std::endl;
        }
    }
    return 0;
}

