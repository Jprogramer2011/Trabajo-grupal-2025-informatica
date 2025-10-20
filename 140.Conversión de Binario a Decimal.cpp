#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string bin;
    cout << "Ingrese número binario: ";
    cin >> bin;
    int decimal = 0, potencia = 0;
    for (int i = bin.size() - 1; i >= 0; i--)
        if (bin[i] == '1')
            decimal += pow(2, potencia);
        potencia++;
    cout << "Decimal: " << decimal << endl;
}
