#include <stdio.h>
#include <stdlib.h>

int main(void){

    FILE *inFile = fopen("./test.txt","a+");
    if (inFile == NULL){
        perror("open file fails: ");
        return(EXIT_FAILURE);
    }
    return(EXIT_SUCCESS);
}