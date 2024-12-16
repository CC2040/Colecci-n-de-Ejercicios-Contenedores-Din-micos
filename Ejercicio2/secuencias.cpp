#include "secuencias.h"
#include <iostream>
#include <list>
#include <stack>

void secuencias() {
    std::list<float> lista = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::stack<float, std::list<float>> pila(lista);

    std::cout<<"Ejercicio 2"<<std::endl;
    while(!pila.empty()) {
        std::cout << pila.top()<<" ";
        pila.pop();
    }
}