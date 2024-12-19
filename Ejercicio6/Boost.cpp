#include "Boost.h"
#include <iostream>
#include <boost/lexical_cast.hpp>


 void p_boost() {
    std::string s = "12345";
     std::cout << "Ejercicio 6" << std::endl;

    try {
        int i = boost::lexical_cast<int>(s);
        std::cout << "Número: " << i << std::endl;
    } catch(boost::bad_lexical_cast &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

}