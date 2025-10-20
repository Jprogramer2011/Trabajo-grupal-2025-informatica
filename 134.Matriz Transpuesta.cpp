#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Ingrese filas y columnas: ";
    cin >> n >> m;
    int A[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> A[i][j];
    cout << "Transpuesta:\n";
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++)
            cout << A[i][j] << " ";
        cout << endl;
    }
}
