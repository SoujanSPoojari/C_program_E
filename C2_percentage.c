#include <stdio.h>
int main()
{
    int n = 0;
    printf("Enter the percentage: ");
    scanf("%d", &n);
    if (n > 90 && n <= 100)
    {
        printf("The grade is A");
    }
    else if (n > 70 && n <= 90)
    {
        printf("The grade is B");
    }
    else if (n > 50 && n <= 70)
    {
        printf("The grade is C");
    }
    else
    {
        printf("The grade is F");
    }
    return 0;
}