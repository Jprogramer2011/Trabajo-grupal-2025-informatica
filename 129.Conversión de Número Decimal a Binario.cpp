#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un número decimal: ";
    cin >> n;

    if (n == 0) {
        cout << "Binario: 0" << endl;
        return 0;
    }

    vector<int> binario;
    while (n > 0) {
        binario.push_back(n % 2);
        n /= 2;
    }

    cout << "Binario: ";
    for (int i = binario.size() - 1; i >= 0; --i)
        cout << binario[i];
    cout << endl;

    return 0;
}
