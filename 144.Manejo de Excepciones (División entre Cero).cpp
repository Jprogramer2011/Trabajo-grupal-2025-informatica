#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Ingrese numerador y denominador: ";
    cin >> a >> b;
    try {
        if (b == 0) throw runtime_error("Error: división por cero");
        cout << "Resultado: " << a / b << endl;
    } catch (runtime_error &e) {
        cout << e.what() << endl;
    }
}
