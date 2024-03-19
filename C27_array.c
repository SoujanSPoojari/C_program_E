#include<stdio.h>
float avg(float arr[],int n);
float avg(float arr[],int n)
{
    float sum=0;
    float avg;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/n;
    return avg;
}
int main()
{
    float a,n;
    float arr[50];
    printf("Enter the size : ");
    scanf("%f",&n);
    printf("Enter the array elements : ");
    for(int i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);
    }
    a=avg(arr, n);
    printf("Average is %0.3f",a);
    return 0;
}