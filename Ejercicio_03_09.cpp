// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 5/09/2023
// Fecha modificación: 5/09/2023
// Número de ejericio: 9
// Problema planteado: Trasponer una matriz de n*m
#include <iostream>
using namespace std;

int main() {
    int n, m, i, j;
    cout << "Ingresa el numero de filas: ";
    cin >> n;
    cout << "Ingresa el numero de columnas: ";
    cin >> m;
    int matriz[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Ingrese el elemento de la fila " << i + 1 << " y de la columna " << j + 1 << ": ";
            cin >> matriz[i][j];
        }
    }

    // Mostrar matriz original
    cout << "Matriz original:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << "----------------------------------------" << endl;
    cout << "La matriz transpuesta:" << endl;
    int matriztranspuesta[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matriztranspuesta[i][j] = matriz[j][i];//en las matrices transpuestas las filas se hacen columnas y las col filas
        }
    }
    // Mostrar la matriz transpuesta
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriztranspuesta[i][j] << "  ";
        }
        cout << endl;
    }
    return 0;
}

