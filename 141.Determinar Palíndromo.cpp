#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string palabra, inversa;
    cout << "Ingrese palabra: ";
    cin >> palabra;
    inversa = palabra;
    reverse(inversa.begin(), inversa.end());
    if (palabra == inversa) cout << "Es palíndromo." << endl;
    else cout << "No es palíndromo." << endl;
}
