/*

Solicite el tamaño de un arreglo.

Solicite uno por uno sus elementos.

Realiza una función para imprimir el contenido del arreglo. A esta función deberás pasar la dirección del arreglo y el tamaño.

Solicite insertar un nuevo elemento en el arreglo mediante la selección de la posición deseada. La posición se debe espcificar desde el número 1 hasta el tamaño del arreglo.

*/
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

void imprimirArreglo(int size, int *parr)

{
     printf("\n The array is: \n");

    for(uint8_t i = 0; i < size;i++)
    {
        printf("age[%d]: %c\n",i,*(parr+i));
    }
}

int main(void)
{
    char size[5];
    uint8_t sizeArray;
    char *endptr;
    int position;

    //pedir la longitud del arreglo
   
    printf("¿De cuantas posiciones quieres el arreglo? ");
    if (fgets(size, 5, stdin) != NULL)
    {
        size[strlen(size) -1 ] = 0;
        printf("El arreglo será de %s posiciones\n", size);

    }

    //transformar el cosito de char a int, se me olvido la existencia se scanf, es mucho mas rapido, abajo si se usa

    errno = 0;
    sizeArray = strtol(size, &endptr, 10);
    if(errno == 0 && *size != 0 && size != endptr){
        printf("strtol return: %d\n",sizeArray);
    }
    else{
        printf("strtol fails\n");
    }

    //creacion del arreglo
    char arr[sizeArray];
    //lenacion del arreglo

    printf("Enter %d elements of the array \n",sizeArray);

    for(uint8_t i = 0; i < sizeArray;i++)
    {
        
    for(int i = 0; i < sizeArray; i++){
        scanf("%hhd", &arr[i]);
    }
    }

    //y se manda a imprimir
    imprimirArreglo(sizeArray,arr);

    printf("\n Enter a position where you want to insert: ");
    scanf("%d", &position);
    position--;
    for(int i = sizeArray-1;i >= position; i--){
        arr[i+1] = arr[i];
    }
    printf("\nEnter the value: ");
    scanf("%hhd", &arr[position]);

    imprimirArreglo(sizeArray+1, arr);
    return 0;
}