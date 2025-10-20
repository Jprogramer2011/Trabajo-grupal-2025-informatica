#include <iostream>
using namespace std;

int main() {
    int n, x;
    cout << "Cantidad de elementos: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "Número a buscar: ";
    cin >> x;
    bool encontrado = false;
    for (int i = 0; i < n; i++)
        if (arr[i] == x) encontrado = true;
    if (encontrado) cout << "El número está en el arreglo.";
    else cout << "No se encontró.";
}
