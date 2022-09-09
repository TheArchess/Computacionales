#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    printf("argc: %d\n",argc);

    for(int i=0; i<5;i++)
    {
        printf("argc[%d]: %s\n",i, argv[i]);//%S es para direccion de memoria de caracteres (%p es para imprimir el contenido de un ountero)
    }

    return EXIT_SUCCESS;
}