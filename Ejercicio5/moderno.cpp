#include "moderno.h"
#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>
void moderno() {
    auto cuadrado = [](int num) { return num * num; };

    std::cout << "Ejercicio 5"<< std::endl;

    std::cout << "Cuadrado de 5: " << cuadrado(5) << std::endl;

    std::vector<int> numeros = {1, 2, 3, 4, 5};
    std::for_each(numeros.begin(), numeros.end(), [](int num) {
        std::cout << num << " ";
    });

    std::shared_ptr<int> ptr(new int(20));
    std::cout << "\nValor apuntado por ptr: " << *ptr << std::endl;

}