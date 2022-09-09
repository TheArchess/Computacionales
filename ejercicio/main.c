#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("argc: %d\n", argc);

    for (int i = 0; i < argc; i++)
    {
        printf("argc[%d]: %s\n", i, argv[i]); //%S es para direccion de memoria de caracteres (%p es para imprimir el contenido de un ountero)
    }

    // tratando de hacerlo manualmente

    

    for (int i=0; i < argc; i++)
    {
        char *pfirst = argv[i];
        char *pfirstChar = pfirst;

        while (*pfirstChar != 0)
        {
            printf("%c", *pfirstChar);

            pfirstChar = pfirstChar + 1; // para apuntar al siguiente caracter
        }
        printf("\n");
    }

 

    return EXIT_SUCCESS;
}