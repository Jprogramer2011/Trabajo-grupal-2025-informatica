#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Tamaño: ";
    cin >> n;
    int a[n], b[n], producto = 0;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) producto += a[i] * b[i];
    cout << "Producto escalar: " << producto << endl;
}
