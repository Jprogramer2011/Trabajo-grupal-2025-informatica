#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream salida("datos.txt");
    salida << "Línea 1\n";
    salida << "Línea 2\n";
    salida.close();

    ifstream entrada("datos.txt");
    string linea;
    cout << "Contenido del archivo:\n";
    while (getline(entrada, linea))
        cout << linea << endl;
    entrada.close();
}
