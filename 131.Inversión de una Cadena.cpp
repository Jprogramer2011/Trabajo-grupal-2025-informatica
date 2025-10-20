#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string texto;
    cout << "Ingrese una cadena: ";
    getline(cin, texto);
    reverse(texto.begin(), texto.end());
    cout << "Cadena invertida: " << texto << endl;
    return 0;
}
