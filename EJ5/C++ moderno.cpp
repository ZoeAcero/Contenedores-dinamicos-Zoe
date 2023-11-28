#include <iostream>
#include <vector>
#include <memory>


class Transformacion {
public:
    virtual int aplicar(int num) const = 0;
};

class Cuadrado : public Transformacion {
public:
    int aplicar(int num) const override {
        return num * num;
    }
};

template <typename T>
void imprimirElemento(const T& elemento, const std::string& mensaje = "") {
    std::cout << mensaje << elemento << std::endl;
}

int main() {

    Cuadrado cuadradoTransformacion;
    std::cout << "Cuadrado de 5: " << cuadradoTransformacion.aplicar(5) << std::endl;

    std::vector<int> numeros = {1, 2, 3, 4, 5};


    std::for_each(numeros.begin(), numeros.end(), [](int num) {
        imprimirElemento(num, "Elemento: ");
    });
