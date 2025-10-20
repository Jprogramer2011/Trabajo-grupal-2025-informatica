#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cout << "Ingrese tres lados: ";
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
        cout << "Forman un triángulo.";
    else
        cout << "No forman un triángulo.";
}
