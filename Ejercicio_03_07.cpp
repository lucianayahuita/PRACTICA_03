// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 6/09/2023
// Fecha modificación: 6/09/2023
// Número de ejericio: 7
// Problema planteado: Efectuar la suma de una matriz tridimensional de orden n x n x n
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Ingrese el tamano de la matrizcuadrada"<<endl;
    cin>>n;
    int matriz3d[n][n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                cout<<"Ingrese el valor para la posicion: "<<i<<j<<k<<endl;;
                cin>>matriz3d[i][j][k];
            }
        }
    }
    //imprimir la matriz
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                cout<<matriz3d[i][j][k]<<"  ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    //realizar la suma de la matriz
    int suma=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                suma+=matriz3d[i][j][k];
            }
        }
    }
    cout<<"La suma de la matriz tridimensional es: "<<suma;
    return 0;
}

