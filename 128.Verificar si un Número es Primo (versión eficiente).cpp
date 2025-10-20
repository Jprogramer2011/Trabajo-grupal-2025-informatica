#include <iostream>
#include <cmath>
using namespace std;

bool esPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); ++i)
        if (n % i == 0)
            return false;
    return true;
}

int main() {
    int n;
    cout << "Ingrese un número: ";
    cin >> n;

    if (esPrimo(n))
        cout << n << " es primo." << endl;
    else
        cout << n << " no es primo." << endl;

    return 0;
}
