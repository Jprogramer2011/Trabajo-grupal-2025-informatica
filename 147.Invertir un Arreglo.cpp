#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Cantidad de elementos: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n / 2; i++)
        swap(arr[i], arr[n - i - 1]);
    cout << "Arreglo invertido: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
}
