// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 5/09/2023
// Fecha modificación: 5/09/2023
// Número de ejericio: 8
// Problema planteado: Multiplique dos matrices una de N x M y la otra de M x N
#include <iostream>
using namespace std;

int main() {
    int m, n, p;

    // Obtener las dimensiones de las matrices
    cout << "Ingrese el número de filas de la primera matriz (m): ";
    cin >> m;
    cout << "Ingrese el número de columnas de la primera matriz (n): ";
    cin >> n;
    cout << "Ingrese el número de columnas de la segunda matriz (p): ";
    cin >> p;
    if (n != p) {
        cout << "No se pueden multiplicar las matrices debido a las dimensiones incorrectas." << endl;
        return 1;
    }
    // Declarar las matrices
    int matriz1[m][n];
    int matriz2[n][p];
    int resultado[m][p];
    // Leer la primera matriz
    cout << "Ingrese los elementos de la primera matriz:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matriz1[i][j];
        }
    }
    // Leer la segunda matriz
    cout << "Ingrese los elementos de la segunda matriz:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            cin >> matriz2[i][j];
        }
    }
    // Inicializar la matriz de resultados a ceros
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            resultado[i][j] = 0;
        }
    }
    // Realizar la multiplicación de matrices
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
    // Mostrar la matriz de resultado
    cout << "Matriz resultante de la multiplicación:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


