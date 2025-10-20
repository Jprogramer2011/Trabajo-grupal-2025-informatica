#include <iostream>
using namespace std;

int main() {
    int n, original, inverso = 0;
    cout << "Ingrese número: ";
    cin >> n;
    original = n;
    while (n > 0) {
        inverso = inverso * 10 + n % 10;
        n /= 10;
    }
    if (original == inverso) cout << "Es capicúa.";
    else cout << "No es capicúa.";
}
