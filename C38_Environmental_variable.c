/*#include<stdio.h>
int main(int argc, char *argv[])
{
    int i;
    for(i=0;i<argc;i++)
    {
        printf("%s", argv[i]);
    }

}*/

#include <stdio.h>
#include <unistd.h>

extern char **environ;

int main(int argc, char *argv[]) {
    int i;

    // Printing command-line arguments
    //printf("Command-line arguments:\n");
    for(i = 0; i < argc; i++) {
        printf("argv[%d]: %s\n", i, argv[i]);
    }

    // Printing environmental variables
    //printf("\nEnvironmental variables:\n");
    for(i = 0; environ[i] != NULL; i++) {
        printf("%s\n", environ[i]);
    }

    return 0;
}
