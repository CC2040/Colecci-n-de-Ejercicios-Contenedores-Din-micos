#include "Ejercicio1/vector.h"
#include "Ejercicio2/secuencias.h"
#include "Ejercicio3/algoritmos.h"
#include "Ejercicio4/calculo.h"
#include "Ejercicio5/moderno.h"
#include "Ejercicio6/Boost.h"

int main() {
    /*Ejercicio 1*/
    vector();
    /*Ejercicio2*/
    secuencias();
    /*Ejercicio3*/
    algoritmos();
    /*Ejercicio4*/
    calculo();
    /*Ejercicio5*/
    moderno();
    /*Ejercicio6*/
    /*Para la parte de boost se require que se use el entorno de ubuntu ya que la intalacion de la libreria boost es mucho mas
     * sencilla y facilita la implementacion del programa, para ello cuando nos encontremos en ubuntu se debera ejecutar los siguientes
     * comandos "sudo apt update" luego "sudo apt install libboost-all-dev" y listo tendremos la libreria para su uso, una vez terminemos
     * de instalar boost solo queda crear el ejecutable a partir de los diferentes archivos que conformaban nuestro main
     * Para ello solo se requiere usar este comando para incluir los diferentes archivos cpp g++ main.cpp "Ejercicio1/archivo1.cpp Ejercicio2/archivo2.cpp -o programa"
     * Hay que tener en cuenta que si no hemos incluido la cabecera en nuestro cpp este comando no servira
     * una vez hecho esto tendremos nuestro ejecutable y lo podremos usar con ./ "nombre de tu programa ejecutable"
     */
    p_boost();
    return 0;
}