#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    int i=0;
    int m=0;
    char a[100];
    printf("Enter the string :");
    scanf("%s", a);
    n=strlen(a);
    while(i!=n/2)
    {
        if(a[i]==a[n-i-1])
        {
            i++;
            continue;
        }
        else
        {
            printf("No, Entered string is not palindrome.");
            return(0);
        }
        i++;
    }
    printf("Entered string is palindrome.");
    return 0;
}