#include <iostream>
#include <cmath>
int main() {
    int numero, original, suma = 0, digitos = 0;
    
    std::cout << "Ingrese un número entero positivo: ";
    std::cin >> numero;

    if (numero < 0) {
        std::cout << "Error: el número debe ser positivo." << std::endl;
        return 1;
    }

    original = numero;
    int temp = numero;

    // Contar los dígitos
    while (temp > 0) {
        temp /= 10;
        digitos++;
    }

    temp = numero;

    // Calcular la suma de potencias
    while (temp > 0) {
        int digito = temp % 10;
        suma += pow(digito, digitos);
        temp /= 10;
    }

    if (suma == original)
        std::cout << original << " es un número Armstrong." << std::endl;
    else
        std::cout << original << " no es un número Armstrong." << std::endl;

    return 0;
}
