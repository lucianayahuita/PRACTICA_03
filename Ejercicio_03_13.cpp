// Materia: Programaci�n I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creaci�n: 4/09/2023
// Fecha modificaci�n: 5/09/2023
// N�mero de ejericio: 13
// Problema planteado: La farmacia FARMACARP tiene N sucursales, leer sus ventas por mes de un
//a�o entero de cada sucursal y calcule:
//a. Total, de ventas
//b. Total, de ventas por sucursal.
//c. Sucursal que m�s ha vendido.
//d. Sucursal que menos ha vendido.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese el n�mero de sucursales: ";
    cin >> n;
    const int meses = 12;
    float totalVentas = 0;
    int matrizventas[n][meses] = {0};
    int sucursalMasVendio = 0;
    int ventasMasAltas = -1; // Inicializar ventas m�s altas con un valor inicial bajo
    for (int i = 0; i < n; i++) { // Bucle para cada sucursal
        cout << "Sucursal " << i + 1 << ":" << endl;
        int ventaSucursal = 0; // Variable para rastrear las ventas de esta sucursal
        for (int j = 0; j < meses; j++) { // Bucle para pedir las ventas por mes
            int venta;
            cout << "Ingrese cuanto vendi� en el mes " << j + 1 << ": ";
            cin >> venta;
            matrizventas[i][j] = venta;
            ventaSucursal += venta; // Actualiza las ventas totales de la sucursal
            totalVentas += venta; // Actualiza las ventas totales de todas las sucursales
        }

        // Comprueba si esta sucursal tiene ventas m�ximas hasta ahora
        if (ventaSucursal > ventasMasAltas) {
            ventasMasAltas = ventaSucursal;
            sucursalMasVendio = i; // Actualiza la sucursal que m�s vendi�
        }
    }
    int sucursalMenosVendio = 0;
    int ventasMasBajas = totalVentas + 1; // Inicializar ventas m�s bajas con un valor inicial alto
    for (int i = 0; i < n; i++) { // Bucle para encontrar la sucursal con ventas m�s bajas
        int ventaSucursal = 0;
        for (int j = 0; j < meses; j++) {
            ventaSucursal += matrizventas[i][j];
        }

        if (ventaSucursal < ventasMasBajas) {
            ventasMasBajas = ventaSucursal;
            sucursalMenosVendio = i; // Actualiza la sucursal que menos vendi�
        }
    }
    // Imprimir ventas por mes
    cout << "Ventas por mes:" << endl;
    for (int j = 0; j < meses; j++) {
        int ventasMes = 0;
        for (int i = 0; i < n; i++) {
            ventasMes += matrizventas[i][j];
        }
        cout << "Mes " << j + 1 << ": " << ventasMes << endl;
    }

    cout << "Ventas totales: " << totalVentas << endl;
    cout << "La sucursal que mas vendio fue la Sucursal " << sucursalMasVendio + 1 << " con un total de ventas de " << ventasMasAltas << endl;
    cout << "La sucursal que menos vendio fue la Sucursal " << sucursalMenosVendio + 1 << " con un total de ventas de " << ventasMasBajas << endl;
    return 0;
}


