//esto es como lo del try-catch en c#
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(void)
{
    char *endptr;
    long val;
    char number[40];

    printf("Enter an integer number: ");
    if (fgets(number, 40, stdin) != NULL)
    {
        number[strlen(number) -1 ] = 0;
        printf("The string to convert is %s\n", number);
    }

    errno = 0;
    val = strtol(number, &endptr, 10);
    /* Check for various possible errors */
    if (errno != 0)
    {
        perror("strtol");
        exit(EXIT_FAILURE);
    }

    if (endptr == number) {
        fprintf(stderr, "No digits were found\n");
        exit(EXIT_FAILURE);
    }

    /* If we got here, strtol() successfully parsed a number */

    printf("strtol() returned %ld\n", val);

    if (*endptr != '\0')        /* Not necessarily an error... */
        printf("Further characters after number: \"%s\"\n", endptr);

    exit(EXIT_SUCCESS);
}