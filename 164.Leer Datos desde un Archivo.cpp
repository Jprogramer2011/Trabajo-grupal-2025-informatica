#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream archivo("salida.txt");
    string linea;
    while (getline(archivo, linea))
        cout << linea << endl;
    archivo.close();
}
