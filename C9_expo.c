#include<stdio.h>
#include<math.h>
int main()
{
    int i,a,n;
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("Enter the exponent value: ");
    scanf("%d",&n);
    if(a>0)
    {
        for(i=0;i<=n;i++)
        {
            printf("%d ", (int)pow(a,i));
        }
    }
    else
    {
        printf("Enter correct no");
    }
}