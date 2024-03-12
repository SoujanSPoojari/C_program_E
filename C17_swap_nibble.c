#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,m;
    char array[50];
    printf("Enter the hexa decimal value : ");
    scanf("%s",array);
    n=strlen(array);
    //printf("%d",n);
    for(i=n-1;i>=2;i--)
    {
    //printf("%d", n);
        printf("%c", array[i]);
    }
    return 0;
}