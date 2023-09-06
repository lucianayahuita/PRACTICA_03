// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 5/09/2023
// Fecha modificación: 5/09/2023
// Número de ejericio: 10
// Problema planteado: Queremos realizar una encuesta a 10 personas, en esta encuesta indicaremos el
//sexo (1=masculino, 2=femenino), si trabaja (1=si trabaja, 2= no trabaja) y su
//sueldo (si tiene un trabajo, sino sera un cero) estará entre 600 y 2000 (valor
//entero). Los valores pueden ser generados aleatoriamente. Calcula y muestra lo
//siguiente:
//• Porcentaje de hombres (tengan o no trabajo).
//• Porcentaje de mujeres (tengan o no trabajo).
//• Porcentaje de mujeres que trabajan.
//• El sueldo promedio de las hombres que trabajan.
//• EL sueldo promedio de las mujeres que trabajan.
#include <iostream>
using namespace std;
int main() {
    int conthombres = 0;
    int contmujeres = 0;
    int conthombtrab = 0;
    int contmujtrab = 0;
    int sumasueldomuj = 0; // Inicializa sumasueldomuj y sumasueldohomb a 0
    int sumasueldohomb = 0;
    for (int i = 0; i < 10; i++) {
        int sexo;
        cout << "Persona: " << i + 1 << endl;
        cout << "Ingrese el sexo de la persona (masculino - 1, femenino - 2): ";
        cin >> sexo;
        if (sexo == 1) {
            conthombres++;
            int optrabajo2;
            cout << "Ingrese 1 si trabaja o 2 si no trabaja" << endl;
            cin >> optrabajo2;
            if (optrabajo2 == 1) {
                conthombtrab++;
                int sueldohomb;
                cout << "Ingrese su sueldo" << endl;
                cin >> sueldohomb;
                if (sueldohomb > 600 && sueldohomb < 2000) {
                    sumasueldohomb += sueldohomb;
                } else {
                    cout << "Ingrese un sueldo en el rango de 600 a 2000" << endl;
                    break;
                }
            } else if (optrabajo2==2) {
                cout << "Como no trabaja su sueldo es 0" << endl;
            }
        } else if (sexo == 2) {
            contmujeres++;
            int optrabajo;
            cout << "Ingrese 1 si trabaja o 2 si no trabaja" << endl;
            cin >> optrabajo;
            if (optrabajo == 1) {
                contmujtrab++;
                int sueldomuj;
                cout << "Ingrese su sueldo" << endl;
                cin >> sueldomuj;
                if (sueldomuj >= 600 && sueldomuj <= 2000) {
                    sumasueldomuj += sueldomuj;
                } else {
                    cout << "Ingrese un sueldo en el rango de 600 a 2000" << endl;
                    break;
                }
            } else if (optrabajo == 2) {
                cout << "Como no trabaja su sueldo es 0" << endl;
            }
        }
    }
    // Calcular los porcentajes y promedios
    double porcentajeMujeres = (static_cast<double>(contmujeres) / 10) * 100;
    double porcentajeHombres = (static_cast<double>(conthombres) / 10) * 100;
    double porcentajeMujeresTrab = (static_cast<double>(contmujtrab) / contmujeres) * 100;
    double promedioSueldosMujeres = (contmujtrab != 0) ? (static_cast<double>(sumasueldomuj) / contmujtrab) : 0;
    double promedioSueldosHombres = (conthombtrab != 0) ? (static_cast<double>(sumasueldohomb) / conthombtrab) : 0;
    cout << "-------------------------------------------------------" << endl;
    cout << "El porcentaje de mujeres es de: " << porcentajeMujeres << "%" << endl;
    cout << "El porcentaje de hombres es de: " << porcentajeHombres << "%" << endl;
    cout << "El porcentaje de mujeres que trabajan es de: " << porcentajeMujeresTrab << "%" << endl;
    cout << "**********************************************************************" << endl;
    cout << "El promedio de los sueldos de las mujeres que trabajan es de: " << promedioSueldosMujeres << endl;
    cout << "El promedio de los sueldos de los hombres que trabajan es de: " << promedioSueldosHombres << endl;
    return 0;
}
