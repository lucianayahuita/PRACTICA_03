// Materia: Programaci�n I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creaci�n: 4/09/2023
// Fecha modificaci�n: 5/09/2023
// N�mero de ejericio: 1
// Problema planteado: Elabore un programa que lea una matriz de orden n x n y la cambie la fila 1 por
//la fina n.
#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Ingrese el n�mero de filas (m): ";
    cin >> m;
    cout << "Ingrese el n�mero de columnas (n): ";
    cin >> n;
    int matriz[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Ingrese el valor para el elemento de la fila " << i + 1 << " y columna " << j + 1 << ": ";
            cin >> matriz[i][j];
        }
    }
    // Mostrar la matriz ingresada
    cout << "Matriz ingresada:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    // Intercambio de dos filas
    int fila1, fila2;
    cout << "Ingrese el n�mero de la primera fila a intercambiar: ";
    cin >> fila1;
    cout << "Ingrese el n�mero de la segunda fila a intercambiar: ";
    cin >> fila2;
    if (fila1 >= 1 && fila1 <= m && fila2 >= 1 && fila2 <= m) {
        fila1--; // Ajustar a �ndice de matriz (comienza en 0)
        fila2--; // Ajustar a �ndice de matriz (comienza en 0)
        int temp[n];
        for (int j = 0; j < n; j++) {
            temp[j] = matriz[fila1][j];
            matriz[fila1][j] = matriz[fila2][j];
            matriz[fila2][j] = temp[j];
        }
        // Mostrar la matriz con las filas intercambiadas
        cout << "Matriz con las filas intercambiadas:" << endl;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << matriz[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "N�mero de fila no v�lido." << endl;
    }
    return 0;
}
