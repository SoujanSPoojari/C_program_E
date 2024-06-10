#include<stdio.h>
int main()
{
    char n[50];
    int i = 0, length;
    printf("Enter the string : ");
    scanf("%s", n);
    while(n[i] != '\0')
    {
        i++;
    }
    length = i;
    printf("String length is %d", length);
    return 0;
}
