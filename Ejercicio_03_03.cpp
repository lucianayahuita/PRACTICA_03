// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 1/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 3
// Problema planteado: Generar una matriz de N x N con números al azar entre A y B, y determinar:
//• La suma de la última columna
//• El producto total de la última fila
//• Obtener el mayor valor y su posición
//• Obtener la desviación estándar de todos los elementos de la matriz
#include <iostream>
#include <cstdlib> // Para rand()
#include <ctime>   // Para time()
#include <cmath>
using namespace std;
int main() {
    int n,m, A, B, C;
    srand(time(NULL));
    cout<<"Ingrese el numero de filas de su matriz"<<endl;
    cin>>m;
    cout<<"Ingrese el numero de columnas de su matriz"<<endl;
    cin>>n;
    cout<<"Ingrese el limite A"<<endl;
    cin>>A;
    cout<<"Ingrese el limite B"<<endl;
    cin>>B;
    C=B-A;
    int matriz[m][n];
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            matriz[i][j]=rand()%C+A; //(genera valores aleatorios del rango B al A
        }
    }
    //mostrar la matriz
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<matriz[i][j]<<"  ";
        }
        cout<<endl;
    }
    int sumaultcolumna=0;
    //calcular la suma de los elementos de la ultima columna
    for(int i=0;i<n;i++){
      sumaultcolumna+=matriz[i][n-1];
    }
    cout<<"La suma de la ult columna es: "<<sumaultcolumna<<endl;
    //calcular el producto total de la ultima fila
    int prodtotal=1;
    for(int j=0;j<n;j++){
        prodtotal*=matriz[m-1][j];
    }
    cout<<"El producto de la ult fila es: "<<prodtotal<<endl;
    //hallar el mayor valor
    int mayor= matriz[0][0];
    int filamayor=0, columnamayor=0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] > mayor) {
                mayor = matriz[i][j];
                filamayor = i;
                columnamayor = j;
            }
        }
    }
    cout << "El mayor valor es " << mayor << " y su posicion es (" << filamayor << ", " << columnamayor << ")" << endl;
    //calcular la desviacion estandar de todos los elementos de la matriz
    double suma = 0.0;
    double promedio;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            suma += matriz[i][j];
        }
    }
    promedio = suma / (m * n);
    double varianza = 0.0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            varianza += pow(matriz[i][j] - promedio, 2);
        }
    }
    varianza /= (m * n);
    double desviacionEstandar = sqrt(varianza);
    cout<<"La desviacion estandar es de: "<<desviacionEstandar;
    return 0;
}

