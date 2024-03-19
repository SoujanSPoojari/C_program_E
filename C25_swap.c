#include<stdio.h>
int a,b;
void swap(int *a, int *b);
void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    
    printf("Enter the number1 : ");
    scanf("%d",&a);
    printf("Enter the number2 : ");
    scanf("%d",&b);
    printf("Before swap:\n");
    printf("%d\n",a);
    printf("%d\n",b);
    swap(&a,&b);
    printf("After swap:\n");
    printf("%d\n",a);
    printf("%d\n",b);
    
    return 0;
}