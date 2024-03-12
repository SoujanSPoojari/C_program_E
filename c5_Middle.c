#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &n1,&n2,&n3);
    if(n1>n2&&n2>n3 || n1<n2&&n2<n3)
    {
        printf("Middle Number is %d", n2);
    }
    else if(n1<n2&&n2>n3 || n1>n2&&n2<n3)
    {
        printf("Middle number is %d", n3);
    }
    else
    {
        printf("Middle number is %d", n1);
    }
     return 0;   
}