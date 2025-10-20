#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    vector<int> v(n);
    cout << "Ingrese los elementos:\n";
    for (int i = 0; i < n; ++i) cin >> v[i];

    bool hubo_intercambio;
    for (int i = 0; i < n - 1; ++i) {
        hubo_intercambio = false;
        for (int j = 0; j < n - 1 - i; ++j) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
                hubo_intercambio = true;
            }
        }
        if (!hubo_intercambio) break;
    }

    cout << "Vector ordenado: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    return 0;
}
