#include <stdio.h>

int main(int argc, char **argv){ //argv es el arreglo y argc es el tamaño del arreclo 
    for(int i=1; i<3; i++){
        printf("Hola %s\n", argv[i]);
    }
    return 0;
}
