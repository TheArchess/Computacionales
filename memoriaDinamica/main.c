/*
void *malloc(size_t size);
void free(void *ptr);
void *calloc(size_t nmemb, size_t size);
void *realloc(void *ptr, size_t size);
void *reallocarray(void *ptr, size_t nmemb, size_t size);

Con malloc puedes reservar un número size de bytes. malloc te devuleve la dirección de memoria donde comenzará 
la cantidad de bytes solicitados o NULL en caso de error. 
Por su parte free te permite liberar la memoria reservada. Solo debes pasar la dirección que te retornó malloc.

*/

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t *create_array(uint8_t);
void destroy_array(uint32_t *);

int main(void){

    uint32_t *buffer = create_array(30);
    if(buffer == NULL) return EXIT_FAILURE;

    for(uint8_t i = 0; i < 30; i++){
        buffer[i] = i+1;
    }

    for(uint8_t i = 0; i < 30; i++){
        printf("buffer[%d]: %d\n",i, buffer[i]);
    }

    destroy_array(buffer);

    return EXIT_SUCCESS;
}

uint32_t *create_array(uint8_t size){
    return (uint32_t * ) malloc(sizeof(uint32_t)* size );
}

void destroy_array(uint32_t *this){
    free(this);
}