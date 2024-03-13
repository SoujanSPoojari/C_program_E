#include<stdio.h>
float temperature(float f);
float temperature(float f)
{
    float c;
    c=(5.0/9.0)*(f-32);
    //printf("%f",c);
    return c;
}
int main()
{
    float val;
    float x;
    printf("Enter the Fahrenheit : ");
    scanf("%f",&x);
    val=temperature(x);
    printf("%f",val);
    return 0;
}

