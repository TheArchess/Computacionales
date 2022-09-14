#include <stdio.h>
#include <stdlib.h>

int main(void){

    FILE *inFile = fopen("./test.txt","r");
    FILE *outFile = fopen("./test2.txt","w+");

    if (inFile == NULL){
        perror("open in file fails: ");
        return(EXIT_FAILURE);
    }
    if (outFile == NULL){
        perror("open out file fails: ");
        return(EXIT_FAILURE);
    }

    char buffer[64];
    char *status =  NULL;

    do{
        status = fgets(buffer, sizeof(buffer),inFile);
        if(status != NULL){
            printf("%s",buffer);
            fprintf(outFile, buffer);
        }
    }while (status !=NULL);
    printf("\n");

    fclose(inFile);
    fclose(outFile);
    return(EXIT_SUCCESS);
}