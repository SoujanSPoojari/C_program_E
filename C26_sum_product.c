#include<stdio.h>
int sum(int a, int d);
int product(int c, int e);
int main()
{
    int su,pr;
    int b,f;
    printf("Enter the number1 : ");
    scanf("%d",&b);
    printf("Enter the number2 : ");
    scanf("%d",&f);
    su=sum(b,f);
    pr=product(b,f);
    printf("Sum is %d\n",su);
    printf("Product is %d\n",pr);
    return 0;
}
int sum(int a, int d)
//int x,y;
{
    //return a*a;
    return a+d;
}
int product(int c, int e)
{
    return c*e;
}