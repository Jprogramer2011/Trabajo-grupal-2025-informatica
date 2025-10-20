#include <iostream>
using namespace std;

long long potencia(int base, int exp) {
    if (exp == 0) return 1;
    return base * potencia(base, exp - 1);
}

int main() {
    int base, exp;
    cout << "Ingrese base y exponente: ";
    cin >> base >> exp;
    cout << base << "^" << exp << " = " << potencia(base, exp) << endl;
}
