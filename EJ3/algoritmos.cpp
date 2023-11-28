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
