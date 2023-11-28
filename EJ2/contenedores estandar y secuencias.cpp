#include <iostream>
#include <list>
#include <stack>
#include <algorithm>
#include <functional>

template<typename T>
void imprimirElemento(const T& elemento) {
    std::cout << "Elemento: " << elemento << std::endl;
}

template<typename T>
void manipularElemento(T& elemento) {
    elemento += 1;
}

int main() {
    std::list<float> lista = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::stack<float, std::list<float>> pila(lista);

    
    auto imprimirLambda = [](const float& elemento) {
        std::cout << "Elemento desde lambda: " << elemento << std::endl;
    };