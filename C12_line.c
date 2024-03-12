#include<stdio.h>
int main()
{
    int a,n,m,i,j,k;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter m: ");
    scanf("%d",&m);
    a=n-m;
    for(i=0;i<a/2;i++)
    {
        printf("$");
    }
    for(j=0;j<m;j++)
    {
        printf("*");
    }
    for(k=a/2+m;k<n;k++)
    {
        printf("$");
    }
    printf("\n");

}