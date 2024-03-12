#include<stdio.h>
int main()
{
    int i,a;
    printf("Enter the number: ");
    scanf("%d",&a);
    if(a>0)
    {
        for(i=0;i<a;i++)
        {
            printf("%d ", (int)pow(2,i));
        }
    }
    else
    {
        printf("Enter correct no");
    }
}