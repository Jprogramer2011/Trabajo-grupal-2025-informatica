#include <iostream>
#include <string>
using namespace std;

struct Estudiante {
    string nombre;
    float nota;
};

int main() {
    Estudiante e;
    cout << "Ingrese nombre: ";
    getline(cin, e.nombre);
    cout << "Ingrese nota: ";
    cin >> e.nota;
    cout << "\nDatos del estudiante:\n";
    cout << "Nombre: " << e.nombre << "\nNota: " << e.nota << endl;
}
