#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

template<typename T>
void imprimirElemento(const T& elemento, const std::string& mensaje = "") {
    std::cout << mensaje << elemento << std::endl;
}

int main() {
    std::vector<int> numeros = {50, 20, 60, 10, 30, 40};

    std::for_each(numeros.begin(), numeros.end(), [](int num) {
        imprimirElemento(num, "Elemento ordenado: ");
    });

    std::cout << "Elementos en orden inverso:" << std::endl;
    std::for_each(numeros.rbegin(), numeros.rend(), [](int num) {
        imprimirElemento(num);
    });

    auto minElement = std::min_element(numeros.begin(), numeros.end());
    auto maxElement = std::max_element(numeros.begin(), numeros.end());

    imprimirElemento(*minElement, "Número mínimo: ");
    imprimirElemento(*maxElement, "Número máximo: ");


    std::cout << "Elementos en orden inverso con iteradores inversos:" << std::endl;
    for (auto it = std::prev(numeros.end()); it != std::prev(numeros.begin()); --it) {
        imprimirElemento(*it);
    }

    return 0;
}
