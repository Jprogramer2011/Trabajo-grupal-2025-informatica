#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string texto;
    cout << "Ingrese texto: ";
    getline(cin, texto);
    int contador = 0;
    for (char c : texto) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            contador++;
    }
    cout << "Cantidad de vocales: " << contador << endl;
}
