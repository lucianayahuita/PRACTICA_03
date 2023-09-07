// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 6/09/2023
// Fecha modificación: 6/09/2023
// Número de ejericio: 4
// Problema planteado: a) Mostrar la matriz que describe el área.
//b) Mostrar el número de filas y columnas que no tienen un muerto viviente.
//c) Determinar las coordenadas de los muertos vivientes en la matriz. Utilice vectores
//paralelos para almacenar la posición de los muertos vivientes. Un vector almacenara el
//índice de la fila y otro vector almacenara el índice de la columna.
//d) La cantidad de muertos vivientes que existen en toda la matriz.
//e) Determinar si dos o más muertos vivientes se encuentran en la primera columna. Si
//es así imprimir “no es posible entrar al complejo” de otro modo imprimir “es posible
//entrar al complejo”.
#include <iostream>
using namespace std;
int main() {
    const int numfilas=3;
    const int numcolumnas=4;
    char matriz[numfilas][numcolumnas];
    for(int i=0;i<numfilas;i++){
        for(int j=0;j<numcolumnas;j++){
            cout<<"Ingrese si tiene(x) o no(o) un muerto viviente en la fila: "<<i+1<<" y columna "<<j+1<<endl;
            cin>>matriz[i][j];
        }
    }
    //imprimir la matriz que describe el area
    cout<<"****************************inciso A*********************"<<endl;
    for(int i=0;i<numfilas;i++){
        for(int j=0;j<numcolumnas;j++){
            cout<<matriz[i][j]<<"  ";
        }
        cout<<endl;
    }
    //mostrar el numero de filas y columnas que no tienen un muerto viviente
    cout<<"**************************inciso B*************************"<<endl;
    int contaX[numfilas]={0};
    int contX[numcolumnas]={0};
    for(int i=0;i<numfilas;i++){
        for(int j=0;j<numcolumnas;j++){
            if(matriz[i][j]=='x'){
                contaX[i]++;
                contX[j]++;
            }
        }
    }
    int numfilaslibres=0;
    int numcolumnaslibres=0;
    for(int i=0;i<numfilas;i++){
        if (contaX[i]==0){
            numfilaslibres++;
        }
    }
    for(int j=0;j<numcolumnas;j++){
        if (contX[j]==0){
            numcolumnaslibres++;
        }
    }
    cout<<"El numero de columnas libres es de: "<<numcolumnaslibres<<endl;
    cout<<"El numero de filas libres es de: "<<numfilaslibres<<endl;
    //mostrar las posiciones donde estan los muertos vivientes
    cout<<"*************************inciso C****************************"<<endl;
    // Arreglos para almacenar las posiciones de las 'x'
    const int maxNumX = numfilas * numcolumnas; // Establecer un valor máximo
    int posicionesFilas[maxNumX];
    int posicionesColumnas[maxNumX];
    int numXEncontradas = 0; // Contador para el número de 'x' encontradas
    // Buscar 'x' en la matriz y almacenar sus posiciones
    for (int i = 0; i < numfilas; i++) {
        for (int j = 0; j < numcolumnas; j++) {
            if (matriz[i][j] == 'x' && numXEncontradas < maxNumX) {
                posicionesFilas[numXEncontradas] = i; // Almacenar la fila de 'x'
                posicionesColumnas[numXEncontradas] = j; // Almacenar la columna de 'x'
                numXEncontradas++; // Incrementar el contador de 'x' encontradas
            }
        }
    }
    cout << "Posiciones de las 'x':" << endl;
    for (int k = 0; k < numXEncontradas; k++) {
        cout << "Fila: " << posicionesFilas[k] << ", Columna: " << posicionesColumnas[k] << endl;
    }
    //mostrar la cantidad de muertos vivientes en toda la matriz
    cout<<"*************************inciso D*****************************"<<endl;
    int contmuertosvivientes=0;
    for(int i=0;i<numfilas;i++){
        for(int j=0;j<numcolumnas;j++){
            if(matriz[i][j]=='x'){
                contmuertosvivientes++;
                contaX[i]++;
                contX[j]++;
            }
        }
    }
    cout<<"El numero de muertos vivientes en toda la matriz es de: "<<contmuertosvivientes<<endl;
    //determinar si dos o más muertos vivientes se encuentran en la misma columna si es asi no es posible entrar al complejo sino si
    cout<<"**************************inciso e*******************************"<<endl;
    int contXprimeracol=0;
    for(int i=0;i<numfilas;i++){
        if (matriz[i][0]=='x'){
            contXprimeracol++;
        }
    }
    if(contXprimeracol>=2){
        cout<<"No es posible entrar al complejo!"<<endl;
    }
    else{
        cout<<"Es posible entrar al complejo!"<<endl;
    }
    //determinar el numero de espacios libres
    cout<<"***************************inciso f****************************"<<endl;
    int contespacioslibres=0;
    for(int i=0;i<numfilas;i++){
        for(int j=0;j<numcolumnas;j++){
            if(matriz[i][j]=='o'){
                contespacioslibres++;
            }
        }
    }
    cout<<"Los espacios sin muertos vivientes son: "<<contespacioslibres;
    return 0;
}

