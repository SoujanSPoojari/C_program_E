#include<stdio.h>
int main()
{
    char c;
    printf("Enter the character: ");
    scanf("%c",&c);

    switch(c)
    {
        case 'A' ... 'Z':
        printf("Uppercase");
        break;
        case 'a' ... 'z':
        printf("Lowercase");
        break;
        case '0' ... '9':
        printf("Number");
        break;
        default:
        printf("None of the above");
        break;
    }
    return 0;
}