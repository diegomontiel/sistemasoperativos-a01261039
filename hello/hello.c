#include <stdio.h>
#include "./libhello.h"

//la funcion main es donde empieza a correr el programa, cualquier otra funcion fuera de ella solo sirve como libreria
int main(int argc, char **argv){
        int i = 0;
    for(i = 1; i < argc; i++){
        printHello(argv[i]);
    }
    return 0;
}
