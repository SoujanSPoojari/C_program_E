#include<stdio.h>
int main()
{
    int i=0;
    char n[100];
    char a[100];
    printf("Enter the string : ");
    scanf("%d", &n);
    for(i=0; n[i]!= '\0'; i++)
    {
        a[i] = n[i];
    }
    printf("Copied string is %d", a);
    return 0;
}