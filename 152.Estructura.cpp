#include <iostream>
#include <string>
using namespace std;

struct Estudiante {
    string nombre;
    float nota;
};

int main() {
    Estudiante e[3];
    float suma = 0;
    for (int i = 0; i < 3; i++) {
        cout << "Nombre: ";
        cin >> e[i].nombre;
        cout << "Nota: ";
        cin >> e[i].nota;
        suma += e[i].nota;
    }
    cout << "Promedio general: " << suma / 3 << endl;
}
