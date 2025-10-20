#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Tamaño de la matriz: ";
    cin >> n;
    int A[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += A[i][i];
        suma += A[i][n - i - 1];
    }
    cout << "Suma de diagonales: " << suma << endl;
}
