#include <iostream>
#include <string>
using namespace std;

int main() {
    string frase;
    cout << "Ingrese frase: ";
    getline(cin, frase);
    int palabras = 0;
    bool enPalabra = false;
    for (char c : frase) {
        if (isspace(c)) enPalabra = false;
        else if (!enPalabra) palabras++, enPalabra = true;
    }
    cout << "Cantidad de palabras: " << palabras << endl;
}
