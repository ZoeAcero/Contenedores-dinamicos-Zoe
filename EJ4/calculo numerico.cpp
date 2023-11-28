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

    std::cout << std::endl;


    double suma = std::accumulate(std::begin(valores), std::end(valores), 0.0);
    double media = suma / valores.size();

    std::cout << "Suma: " << suma << std::endl;
    std::cout << "Media: " << media << std::endl;

    
    auto agregarValor = [](double& valor) { valor += 5.0; };
    std::for_each(std::begin(valores), std::end(valores), agregarValor);

    std::cout << "Valores + 5.0: ";
    std::for_each(std::begin(valores), std::end(valores), [](double valor) {
        imprimirElemento(valor);
    });
