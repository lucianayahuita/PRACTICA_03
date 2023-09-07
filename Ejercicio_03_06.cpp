// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 6/09/2023
// Fecha modificación: 6/09/2023
// Número de ejericio: 6
// Problema planteado: Generar la matriz para un orden NxN que se llene con la secuencia Fibonacci
#include <iostream>
using namespace std;
int main() {
    int N;
    cout<<"Ingrese el tamano de la matriz cuadrada"<<endl;
    cin>>N;
    int matriz[N][N];
    int c=0, a=0 , b=1;
    for(int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            matriz[i][j]=b;
            c=a+b;
            a=b;
            b=c;
        }
    }
    //imprimir la matriz
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout <<endl;
    }
    //1 1 2
    //3 5 8
    //13 21 34
    return 0;
}
