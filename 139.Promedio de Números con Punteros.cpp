#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Cantidad de números: ";
    cin >> n;
    double arr[n], suma = 0, *ptr = arr;
    for (int i = 0; i < n; i++) cin >> *(ptr + i);
    for (int i = 0; i < n; i++) suma += *(ptr + i);
    cout << "Promedio: " << suma / n << endl;
}
