#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string texto;
    cout << "Ingrese texto: ";
    getline(cin, texto);
    for (char &c : texto)
        c = toupper(c);
    cout << "Texto en mayúsculas: " << texto << endl;
}
