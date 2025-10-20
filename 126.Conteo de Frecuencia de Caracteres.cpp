#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    cout << "Ingrese un texto: ";
    getline(cin, texto);

    int frecuencia[256] = {0};

    for (char c : texto) {
        frecuencia[(unsigned char)c]++;
    }

    cout << "Frecuencia de caracteres:\n";
    for (int i = 0; i < 256; ++i) {
        if (frecuencia[i] > 0) {
            cout << "'" << (char)i << "' -> " << frecuencia[i] << " veces" << endl;
        }
    }

    return 0;
}
