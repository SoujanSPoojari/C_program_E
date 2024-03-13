#include<stdio.h>
int square(int a);
int cube(int c);
int main()
{
    int sq,cu;
    int b;
    printf("Enter the number : ");
    scanf("%d",&b);
    sq=square(b);
    cu=cube(b);
    printf("Square is %d\n",sq);
    printf("Cube is %d\n",cu);
    return 0;
}
int square(int a)
//int x,y;
{
    //return a*a;
    return a * a;
}
int cube(int c)
{
    return c * c * c;
}