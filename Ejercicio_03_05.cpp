// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 6/09/2023
// Fecha modificación: 6/09/2023
// Número de ejericio: 5
// Problema planteado:Generar la matriz para un orden NxN
//Sea n=5
//1 2 3 4 5
//3 4 5 6 7
//5 6 7 8 9
//7 8 9 10 11
//9 10 11 12 13
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese el límite: ";
    cin >> n;
    int matriz[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = (i * 2) + (j + 1)+i;//por ejemplo para la tercera fila=(2*2)+(0+1)+2
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << "  ";
        }
        cout << endl;
    }
    return 0;
}


