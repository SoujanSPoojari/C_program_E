#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int sum, avg;
    for(i=0;i<argc;i++)
    {
        sum=sum+argv[i];
        //argc=argc-1;
        avg=sum/(argc - 1);
        printf("Sum is %d", avg);
    }
}