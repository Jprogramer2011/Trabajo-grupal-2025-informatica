#include <iostream>
using namespace std;

int sumaRecursiva(int arr[], int n) {
    if (n == 0) return 0;
    return arr[n - 1] + sumaRecursiva(arr, n - 1);
}

int main() {
    int n;
    cout << "Ingrese cantidad de elementos: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "La suma total es: " << sumaRecursiva(arr, n) << endl;
}
