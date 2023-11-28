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

