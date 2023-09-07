// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 5/09/2023
// Fecha modificación: 6/09/2023
// Número de ejericio: 14
// Problema planteado: Simule una elección de nuestro país Bolivia. En ello se mostrará las elecciones
//por departamento y existirá N candidatos.
//El programa debe pedir la cantidad de votos por departamento y candidato y
//almacenarlos en una matriz.
//El programa debe calcular lo siguiente:
//• Si un candidato gana con el 50% + 1 voto es ganador absoluto.
//• Si no ningún candidato que logre el 50% + 1 voto el programa debe sacar
//los dos mas votados para una segunda vuelta.
#include <iostream>
using namespace std;

int main() {
    const int numDepartamentos = 9; // Número fijo de departamentos
    int numCandidatos;
    cout << "Ingrese la cantidad de candidatos: ";
    cin >> numCandidatos;
    // Crear una matriz para almacenar los votos por departamento y candidato
    int votos[numDepartamentos][numCandidatos];
    // Ingresar los votos por departamento y candidato
    for (int i = 0; i < numDepartamentos; i++) {
        for (int j = 0; j < numCandidatos; j++) {
            cout << "Ingrese los votos del departamento " << (i + 1) << " para el candidato " << (j + 1) << ": ";
            cin >> votos[i][j];
        }
    }
    // Calcular el total de votos por candidato
    int totalVotos[numCandidatos] = {0};
    for (int i = 0; i < numDepartamentos; i++) {
        for (int j = 0; j < numCandidatos; j++) {
            totalVotos[j] += votos[i][j];
        }
    }
    // Calcular la mitad de los votos necesarios para un ganador absoluto
    int sumaTotalVotos = 0;
    for (int i = 0; i < numCandidatos; i++) {
        sumaTotalVotos += totalVotos[i];
    }
    int mitadVotos = sumaTotalVotos / 2 + 1;

    // Determinar el ganador absoluto (si existe)
    int ganadorAbsoluto = -1;
    for (int i = 0; i < numCandidatos; i++) {
        if (totalVotos[i] >= mitadVotos) {
            ganadorAbsoluto = i;
            break;
        }
    }

    if (ganadorAbsoluto != -1) {
        cout << "El candidato " << (ganadorAbsoluto + 1) << " es el ganador absoluto con " << totalVotos[ganadorAbsoluto] << " votos." << endl;
    } else {
        // Encontrar los dos candidatos más votados para la segunda vuelta
        int primerMax = -1, segundoMax = -1, primerCandidato = -1, segundoCandidato = -1;
        for (int i = 0; i < numCandidatos; i++) {
            if (totalVotos[i] > primerMax) {
                segundoMax = primerMax;
                segundoCandidato = primerCandidato;
                primerMax = totalVotos[i];
                primerCandidato = i;
            } else if (totalVotos[i] > segundoMax) {
                segundoMax = totalVotos[i];
                segundoCandidato = i;
            }
        }
        cout << "Se requiere una segunda vuelta entre los candidatos " << (primerCandidato + 1)
             << " y " << (segundoCandidato + 1) << " con " << primerMax << " y "
             << segundoMax << " votos respectivamente." << endl;
    }
    return 0;
}
