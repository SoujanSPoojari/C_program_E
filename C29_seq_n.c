#include<stdio.h>
int seq(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n+seq(n-1);
    }
}
    int main()
    {
        int x,n;
        printf("Enter the N value : ");
        scanf("%d",&n);
        x=seq(n);
        printf("Sum is %d", x);
    }