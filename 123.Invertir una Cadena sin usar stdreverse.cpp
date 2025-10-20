#include <iostream>
#include <string>
int main() {
    std::string texto;
    std::cout << "Ingrese una cadena: ";
    std::getline(std::cin, texto);

    std::cout << "Cadena invertida: ";
    for (int i = texto.length() - 1; i >= 0; --i) {
        std::cout << texto[i];
    }
    std::cout << std::endl;
    return 0;
}

