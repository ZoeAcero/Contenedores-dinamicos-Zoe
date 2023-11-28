#include <iostream>
#include <vector>
#include <memory>


class Transformacion {
public:
    virtual int aplicar(int num) const = 0;
};
