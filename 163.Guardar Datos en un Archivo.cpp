#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string texto;
    ofstream archivo("salida.txt");
    cout << "Escriba algo: ";
    getline(cin, texto);
    archivo << texto;
    archivo.close();
    cout << "Archivo guardado con éxito." << endl;
}
