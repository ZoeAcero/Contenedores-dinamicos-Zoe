#include <iostream>
#include <valarray>
#include <algorithm>
#include <numeric>

template<typename T>
void imprimirElemento(const T& elemento, const std::string& mensaje = "") {
    std::cout << mensaje << elemento << " ";
}

int main() {
    std::valarray<double> valores = {1.0, 2.0, 3.0, 4.0, 5.0};

    std::cout << "Valores originales: ";
    std::for_each(std::begin(valores), std::end(valores), [](double valor) {
        imprimirElemento(valor);
    });

    
