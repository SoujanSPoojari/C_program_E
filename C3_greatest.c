#include<stdio.h>
int main()
{
    int n1, n2, n3;
    printf("Enter the n1: ");
    scanf("%d",&n1);
    printf("Enter the n2: ");
    scanf("%d",&n2);
    printf("Enter the n3: ");
    scanf("%d",&n3);
    if(n1>n2)
    {
        if(n1>n3)
        {
            printf("n1 is the greatest");
        }
        else(n2>n3)
        {
            printf("n2 is the greatest");
        }
    }
    else
    {
            printf("n3 is the greatest");
    }
return 0;
}