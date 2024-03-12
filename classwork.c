#include<stdio.h>
int main()
{
    int num1,num2,num;
    printf("Enter the num1: ");
    scanf("%d",&num1);
    printf("Enter the num2: ");
    scanf("%d",&num2);
    if(num1<num2)
    {
        printf("Max of two number is %d",num2);
    }
    else
    {
        printf("Max of two number is %d",num1);
    }
}