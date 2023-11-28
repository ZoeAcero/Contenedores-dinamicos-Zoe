#include <iostream>
#include <vector>

int main() {
    
    std::vector<int> numeros;
    for (int i = 1; i <= 5; ++i) {
        numeros.push_back(i * 10);
    }
