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
