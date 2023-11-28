#include <iostream>
#include <list>
#include <stack>

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

    while (!pila.empty()) {

        imprimirElemento(pila.top());

        imprimirLambda(pila.top());

        auto manipularLambda = [](float& elemento) {
            elemento *= 2; // Duplicar cada elemento en la pila
        };
        manipularLambda(pila.top());

        imprimirElemento(pila.top());

        manipularElemento(pila.top());

        imprimirElemento(pila.top());

        pila.pop();
    }

    return 0;
}