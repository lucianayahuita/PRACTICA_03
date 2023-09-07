// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 5/09/2023
// Fecha modificación: 6/09/2023
// Número de ejericio: 12
// Problema planteado: Ingresa una matriz de NxN y a continuación:
//a. Elimine una fila ingresada por el usuario.
//b. Elimine una columna ingresada por el usuario.
//c. Inserte una fila por un valor determinado por el usuario.
//d. Inserte una columna por un valor determinado por el usuario
#include <iostream>
using namespace std;
int main() {
    int n, i, j;
    cout << "Ingrese el tamano de la matriz (n*n): ";
    cin >> n;
    int matriz[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"Ingrese el valor de la fila "<<i+1<<" y columna "<<j+1<<endl;
            cin>>matriz[i][j];
        }
    }
    //imprimir la matriz
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matriz[i][j]<<"  ";
        }
        cout<<endl;
    }
    //elimine una fila ingresada por el usuario
    cout<<"*************************************Inciso A*************************************************"<<endl;
    int filaelim;
    cout<<"Ingrese la fila que desea eliminar tomando en cuenta que 0 es la primera fila 1 la segunda y asi sucesivamente"<<endl;
    cin>>filaelim;
    if (filaelim<n){
        int matrizactualizada[n-1][n];
        int filaact=0;
        for(int i=0;i<n;i++){
            if (i==filaelim){
                continue;
            }
            for(int j=0;j<n;j++){
            matrizactualizada[filaact][j]=matriz[i][j];
            }
        filaact++;
        }
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n;j++){
                cout<<matrizactualizada[i][j]<<"  ";
            }
        cout<<endl;
       }
    }
    else{
        cout<<"Ingrese correctamente la fila por favor"<<endl;
    }
    //elimine una columna ingresada por el usuario
    cout<<"*************************Inciso B*********************************"<<endl;
    int colelim;
    cout<<"Ingrese la columna que desea eliminar"<<endl;
    cin>>colelim;
    if(colelim<n){
        int matrizact[n][n-1];
        int colact=0;
        for(int j=0;j<n;j++){
            if(j==colelim){
                continue;
            }
            for(int i=0;i<n;i++){
                matrizact[i][colact]=matriz[i][j];
           }
        colact++;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                cout<<matrizact[i][j]<<"  ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Inserte bien el numero de columna que desea eliminar"<<endl;
    }
    //inserte una fila por un valor determinado por el usuario
    cout<<"*********************Inciso C******************************"<<endl;
    int filainsert;
    int v[n];
    cout<<"Ingrese en que num de fila desea insertar los nuevos valores"<<endl;
    cin>>filainsert;
    int matriz2[n+1][n];
    if(filainsert<n){
        int v[n];
        cout<<"Ingrese los valores para esa nueva fila"<<endl;
        for(int j=0;j<n;j++){
            cin>>v[j];
        }
        int matriz2[n + 1][n];
        for (int i = 0; i < n + 1; i++) {
            if (i == filainsert) {
                // Insertar la nueva fila
                for (int j = 0; j < n; j++) {
                    matriz2[i][j] = v[j];
                }
            } else if (i < filainsert) {
                // Copiar las filas anteriores
                for (int j = 0; j < n; j++) {
                    matriz2[i][j] = matriz[i][j];
                }
            } else {
                // Copiar las filas después de la posición de inserción
                for (int j = 0; j < n; j++) {
                    matriz2[i][j] = matriz[i - 1][j];
                }
            }
        }
        // Imprimir matriz actualizada con la nueva fila
        for (int i = 0; i < n + 1; i++) {
            for (int j = 0; j < n; j++) {
                std::cout << matriz2[i][j] << "  ";
            }
            std::cout << std::endl;
        }
    }
    else{
        cout<<"Ingrese bien donde desea insertar la fila"<<endl;
    }
    //insertar una nueva columna por un valor determinado por el usuario
    cout<<"******************************Inciso D****************************"<<endl;
    int nuevacol;
    cout<<"Ingrese en que posicion desea insertar la nueva columna"<<endl;
    cin>>nuevacol;
    int v1[n];
    int matriz3[n][n+1];
    if(nuevacol<n){
        int v1[n];
        cout<<"Ingrese los valores que desea ingresar en esa nueva columna"<<endl;
        for(int i=0;i<n;i++){
            cin>>v1[i];
        }
        int matriz3[n][n+1];
        for (int j = 0; j < n + 1; j++) {
            if (j == nuevacol) {
                for (int i = 0; i < n; i++) {
                    matriz3[i][j] = v1[i];
                }
            } else if (j < nuevacol) {
                for (int i = 0; i < n; i++) {
                    matriz3[i][j] = matriz[i][j];
                }
            } else {
                for (int i = 0; i < n; i++) {
                    matriz3[i][j] = matriz[i][j-1];
                }
            }
        }
        // Imprimir matriz actualizada con la nueva fila
        for (int i = 0; i < n + 1; i++) {
            for (int j = 0; j < n; j++) {
                std::cout << matriz3[i][j] << "  ";
            }
            std::cout << std::endl;
        }
    }
    else{
        cout<<"Ingrese bien en que posicion desea insertar la columna"<<endl;
    }
    return 0;
}
