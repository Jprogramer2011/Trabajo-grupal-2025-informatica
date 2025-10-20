#include <iostream>
using namespace std;

int main() {
    int nacimiento;
    cout << "Ingrese año de nacimiento: ";
    cin >> nacimiento;
    int edad = 2025 - nacimiento;
    cout << "Su edad es: " << edad << " años." << endl;
}
