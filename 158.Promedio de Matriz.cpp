#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Filas y columnas: ";
    cin >> n >> m;
    double suma = 0;
    int total = n * m;
    double matriz[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> matriz[i][j], suma += matriz[i][j];
    cout << "Promedio: " << suma / total << endl;
}
