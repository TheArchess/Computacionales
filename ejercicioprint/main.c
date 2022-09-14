#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void){
    printf("pi = %.5f\n",4 * atan(1.0));
    return(EXIT_SUCCESS);
}
//En este caso el espcificador de conversión es %.5f. .5 corresponde a la precisión, es decir, 5 dígitos.
//los especificadores de conversion siempre empiezan por %
//4 * atan(1.0) es pi. atan es una funcion para calcular el arcotangente