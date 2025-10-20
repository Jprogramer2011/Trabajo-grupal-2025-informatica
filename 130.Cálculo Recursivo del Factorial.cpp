#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    cout << "Ingrese un número entero positivo: ";
    cin >> n;
    if (n < 0) {
        cout << "Error: número negativo." << endl;
        return 1;
    }
    cout << "El factorial de " << n << " es: " << factorial(n) << endl;
    return 0;
}
