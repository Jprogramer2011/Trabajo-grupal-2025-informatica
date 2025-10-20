#include <iostream>
using namespace std;

double promedio(double arr[], int n) {
    double suma = 0;
    for (int i = 0; i < n; i++) suma += arr[i];
    return suma / n;
}

int main() {
    int n;
    cout << "Cantidad de elementos: ";
    cin >> n;
    double arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "Promedio: " << promedio(arr, n) << endl;
}

