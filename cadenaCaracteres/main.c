#include <stdio.h>
#include <stdint.h>

int main (void)
{ 
    /*char *text ="Hola C";//cadena inmutable, no puedes cambiar el valor de la secuencia

    printf("%s\n", text);

    *text = 'H';//sale esto: Violación de segmento (`core' generado)

    printf("%s",text);
    printf("\n");*/

    //para corregir esto entonces vamos a declarar a text como un arreglo de caracteres y no como la direccion de caracteres

    char text[]="hola C";//es un arreglo de 7 espacios porque cuenta el espacio y un nulo al final de la cadena
    printf("%s\n", text);

    *text = 'H';
    // ó text[0]='H';
    printf("%s",text);
    printf("\n");

    return 0; //recuerda usar el start debugging con gcc solito (aqui en code)
}