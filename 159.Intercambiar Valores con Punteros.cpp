#include <iostream>
using namespace std;

void intercambiar(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;
    cout << "Ingrese a y b: ";
    cin >> a >> b;
    intercambiar(&a, &b);
    cout << "Después del intercambio: a=" << a << ", b=" << b << endl;
}
