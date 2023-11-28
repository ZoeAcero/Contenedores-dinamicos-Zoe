#include <iostream>
#include <vector>
#include <memory>
#include <functional>


class Transformacion {
public:
    virtual int aplicar(int num) const = 0;
    virtual ~Transformacion() = default; 
