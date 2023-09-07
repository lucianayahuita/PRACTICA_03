// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 6/09/2023
// Fecha modificación: 6/09/2023
// Número de ejericio: 2
// Problema planteado: Generar la matriz espiral para un orden n :
//Sea n=3:
//1 2 3
//8 9 4
//7 6 5
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout << "Ingrese el tamano de la matriz cuadrada: ";
    cin >> n;
    vector<vector<int>> matriz(n, vector<int>(n));
    int fila_inicio = 0, fila_fin = n - 1, columna_inicio = 0, columna_fin = n - 1;
    int valor = 1;
    while (fila_inicio <= fila_fin && columna_inicio <= columna_fin) {
        // Rellenar hacia la derecha
        for (int i = columna_inicio; i <= columna_fin; ++i) {
            matriz[fila_inicio][i] = valor++;
        }
        fila_inicio++;
        // Rellenar hacia abajo
        for (int i = fila_inicio; i <= fila_fin; ++i) {
            matriz[i][columna_fin] = valor++;
        }
        columna_fin--;
        // Rellenar hacia la izquierda
        if (fila_inicio <= fila_fin) {
            for (int i = columna_fin; i >= columna_inicio; --i) {
                matriz[fila_fin][i] = valor++;
            }
            fila_fin--;
        }
        // Rellenar hacia arriba
        if (columna_inicio <= columna_fin) {
            for (int i = fila_fin; i >= fila_inicio; --i) {
                matriz[i][columna_inicio] = valor++;
            }
            columna_inicio++;
        }
    }
    // Imprimir la matriz en forma de caracol
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
