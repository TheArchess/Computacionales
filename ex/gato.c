#include <stdio.h>

int findMaxInArr(int *parr, int sizeofArr);// declaracion de funcion
int findMaxInArr2(int *parr, int sizeofArr);

int main()
{
    int arr[] = {1,2,3,4,5,6};

    int max = findMaxInArr(arr, 6);
    
    for(int i=0; i<6; i++)
    {
        printf("Arr[%d]: %d\n", i, arr[i]);
    }
    printf("Con punteros\n");
    printf("Max: %d\n", max);
    max = findMaxInArr2(arr, 6);//arr = direccion del  primer elemento arreglo, &arr es la direccion del arreglo, re raro
    printf("Con arreglos\n");
    printf("Max: %d\n", max);

    return 0;
}

int findMaxInArr(int *parr, int sizeofArr)//funcion ahora si
{
    int max = *parr;//con el asterisco agarro el contenido de la variable, sin el asterisco es solo la direccion

    for(int i=1; i<sizeofArr; i++)
    {
        if((*(parr+i))>max)
        {
            max = *(parr+i);
        }
    }

    return max;
}

//*(parr+i) es lo mismo que (parr[i])

int findMaxInArr2(int *parr, int sizeofArr)
{
    int max = parr[0];

    for(int i=1; i<sizeofArr; i++)
    {
        if((parr[i])>max)
        {
            max = parr[i];
        }
    }

    return max;
}