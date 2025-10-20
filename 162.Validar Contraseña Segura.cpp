#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string pass;
    cout << "Ingrese contraseña: ";
    cin >> pass;
    bool may = false, min = false, num = false;
    for (char c : pass) {
        if (isupper(c)) may = true;
        if (islower(c)) min = true;
        if (isdigit(c)) num = true;
    }
    if (pass.size() >= 8 && may && min && num)
        cout << "Contraseña segura.";
    else
        cout << "Contraseña débil.";
}
