#include <iostream>
#include <vector>
#include <memory>
#include <functional>


class Transformacion {
public:
    virtual int aplicar(int num) const = 0;
    virtual ~Transformacion() = default;
};

class Cuadrado : public Transformacion {
public:
    int aplicar(int num) const override {
        return num * num;
    }
};

class Cubo : public Transformacion {
public:
    int aplicar(int num) const override {
        return num * num * num;
    }
};

class EstrategiaContainer {
private:
    std::shared_ptr<Transformacion> estrategia;

public:
    void setEstrategia(const std::shared_ptr<Transformacion>& nuevaEstrategia) {
        estrategia = nuevaEstrategia;
    }

    int aplicarEstrategia(int num) const {
        if (estrategia) {
            return estrategia->aplicar(num);
        }
        return num;
    }
};

int main() {

    EstrategiaContainer contenedor;

    std::cout << "Cuadrado de 3 usando puntero compartido: " << contenedor.aplicarEstrategia(3) << std::endl;

    contenedor.setEstrategia(std::make_shared<Cubo>());
    std::cout << "Cubo de 3 usando puntero compartido: " << contenedor.aplicarEstrategia(3) << std::endl;
    

    return 0;
}


