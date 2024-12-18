#include "calculo.h"
#include <iostream>
#include <valarray>

void calculo() {
    std::valarray<float> valores = {1.0, 2.0, 3.0, 4.0, 5.0};

    std::cout<<"Ejercicio 4"<<std::endl;
    std::cout << "Suma: " << valores.sum() << std::endl;
    std::cout << "Media: " << valores.sum() / valores.size() << std::endl;

    std::cout<<"Valores: ";
    for(float valor : valores) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;

    valores += 5.0;

    std::cout << "Valores +5.0: ";
    for(float valor : valores) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;
}