#include<stdio.h>
#include<string.h>
int main()
{
    char t;
    int i=0;
    char n[100];
    printf("Enter the string : ");
    scanf("%s",n);
    int len=strlen(n);
    while(i!=len/2)
    {
        //printf("%d",i);
        t=n[i];
        n[i] = n[len-i-1];
        n[len-i-1] = t;
        i++;
    }
    printf("Reversed string is %s", n);

}