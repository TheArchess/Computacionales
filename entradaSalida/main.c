/*#include <stdio.h>
int main(void)
{
    char name[40];
    printf("What is your name? ");
    if (fgets(name, 40, stdin) != NULL)
    {
        printf("Hello %s!\n", name);
    }
}*/

//¿Recuerdas qué es el nombre de un arreglo? Es la dirección del primer elemento del arreglo. 
//Por tanto le estás diciendo a fgets dónde debe iniciar a colocar los caracteres introducidos por el usuario y hasta cuántos, en este caso 40.
// Nota además que le dices de dónde vienen los datos: stdin o el flujo de entrada estándar, que en este caso es el teclado. 



// si se corre el programa como .7main >out.txt se lleva la salida a un archivo
//puede visualizarse en consola con hexdump -C out.txt
#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[40];
    printf("What is your name? ");
    if (fgets(name, 40, stdin) != NULL)
    {
        name[strlen(name) -1 ] = 0;//encuentra el char del enter y lo borra
        printf("Hello %s!\n", name);
    }
}