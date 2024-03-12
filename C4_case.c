#include<stdio.h>
int main()
{
    char c;
    printf("Enter the value: ");
    scanf("%c",&c);
    if(c>='A' && c<='Z')
    {
        printf("The Entered Alphabet is Upper Case\n");
    }
    else if(c>='a' && c<='z')
    {
        printf("The Entered Alphabet is Lower Case\n");
    }
    else if(c>='0' && c<='9')
    {
        printf("The Entered is Digit\n");
    }
    else
    {
        printf("None of the above");
    }
    return 0;
}