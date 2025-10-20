#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int n;
    cout << "Tamaño del vector: ";
    cin >> n;
    srand(time(0));
    for (int i = 0; i < n; i++)
        cout << rand() % 100 << " ";
}
