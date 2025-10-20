#include <iostream>
#include <vector>
using namespace std;

int busquedaBinaria(vector<int> v, int x) {
    int izq = 0, der = v.size() - 1;
    while (izq <= der) {
        int mid = (izq + der) / 2;
        if (v[mid] == x) return mid;
        else if (v[mid] < x) izq = mid + 1;
        else der = mid - 1;
    }
    return -1;
}

int main() {
    vector<int> v = {1, 3, 5, 7, 9, 11};
    int x;
    cout << "Ingrese número a buscar: ";
    cin >> x;
    int pos = busquedaBinaria(v, x);
    if (pos != -1) cout << "Encontrado en posición " << pos << endl;
    else cout << "No encontrado." << endl;
}
