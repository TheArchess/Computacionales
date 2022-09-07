#include <stdio.h>>

int findMaxInArr(int *parr, int sizeofArr);// declaracion de funcion

int main()
{
    int arr[] = {1,2,3,4,5,6};

    int max = findMaxInArr(arr, 6);

    for(int i=0; i<6; i++)
    {
        printf("Arr[%d]: %d\n", i, arr[i]);
    }
    printf("Max: %d\n", max);

    return 0;
}

int findMaxInArr(int *parr, int sizeofArr)//funcion ahora si
{
    int max = *parr;

    for(int i=1; i<6; i++)
    {
        if((*parr)>max)
        {
            max = (*parr);
        }
    }
}
