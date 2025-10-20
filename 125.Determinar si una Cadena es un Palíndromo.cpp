#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool esPalindromo(string str) {
    string limpio = "";
    for (char c : str) {
        if (isalnum(c)) limpio += tolower(c);
    }

    int i = 0, j = limpio.length() - 1;
    while (i < j) {
        if (limpio[i] != limpio[j])
            return false;
        i++; j--;
    }
    return true;
}

int main() {
    string cadena;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);

    if (esPalindromo(cadena))
        cout << "Es un palíndromo." << endl;
    else
        cout << "No es un palíndromo." << endl;

    return 0;
}
