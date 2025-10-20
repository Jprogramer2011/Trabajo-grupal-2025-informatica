#include <iostream>
using namespace std;

long long potencia(int b, int e) {
    if (e == 0) return 1;
    return b * potencia(b, e - 1);
}

int main() {
    int base, exp;
    cout << "Base: ";
    cin >> base;
    cout << "Exponente: ";
    cin >> exp;
    cout << "Resultado: " << potencia(base, exp) << endl;
}
