#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño de la matriz cuadrada: ";
    cin >> n;

    int matriz[100][100]; // Límite arbitrario

    cout << "Ingrese los elementos de la matriz:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matriz[i][j];

    int suma = 0;

    for (int i = 0; i < n; i++) {
        suma += matriz[i][i]; // Diagonal principal
        suma += matriz[i][n - 1 - i]; // Diagonal secundaria
    }

    if (n % 2 == 1)
        suma -= matriz[n / 2][n / 2]; // Eliminar duplicado del centro

    cout << "Suma de diagonales: " << suma << endl;

    return 0;
}
