#include <iostream>
#include <vector>

int main() {

    std::vector<int> numeros;
    for (int i = 1; i <= 5; ++i) {
        numeros.push_back(i * 10);
    }

    for (const auto &numero : numeros) {

        auto imprimirDoble = [](int n) {
            std::cout << "El doble de " << n << " es " << n * 2 << std::endl;
        };

        imprimirDoble(numero);
    }

    return 0;
}

