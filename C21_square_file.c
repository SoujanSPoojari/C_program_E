#include<stdio.h>
int square(int a);
int main()
{
    int sq;
    int b;
    printf("Enter the number : ");
    scanf("%d",&b);
    sq=square(b);
    printf("Square is %d",sq);
    return 0;
}
int square(int a)
{
    int x;
    x=a * a;
    return x;
}