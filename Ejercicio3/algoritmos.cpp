#include "algoritmos.h"
#include <iostream>
#include <vector>
#include <algorithm>

void algoritmos() {
    std::vector<int> numeros = {50, 20, 60, 10, 30, 40};
    std::sort(numeros.begin(), numeros.end());

    std::cout << "\nEjercicio 3"<< std::endl;
    for(int num : numeros) {
        std::cout << num <<" ";
    }

    int maxNum = *std::max_element(numeros.begin(), numeros.end());
    std::cout << "\nNumero maximo: " << maxNum << std::endl;

}