#include <iostream>
using namespace std;

int main() {
    int n;
    long long fact = 1;
    cout << "Ingrese número: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
        fact *= i;
    cout << "Factorial = " << fact << endl;
}
