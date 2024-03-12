#include<stdio.h>
int main()
{
    int i,j,n,m;
    int arr[n];
    int count;
    printf("Enter the array1 size : ");
    scanf("%d",&n);
    printf("Enter the array2 size : ");
    scanf("%d",&m);
    printf("Enter the array1 elements : ");
    while(i!=n)
    {
    scanf("%d",&i);
    printf("Enter the array2 elements : ");
    while(j!=m)
    {
    scanf("%d",&j);
        j++;
    }
        i++;
    }
    if(arr[i]==arr[j])
    {
        count++;
        printf("Array elements are equal.");
    }
    else
    {
        printf("Array elements are not equal.");
    }
    return 0;
}