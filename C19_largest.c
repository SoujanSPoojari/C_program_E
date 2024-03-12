#include<stdio.h>
int main()
{
    int i,j,m,n;
    int large;
    printf("Enter the size : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &n);
        large=arr[0];
        for(i=0;i<n;i++)
        {
            if(large>arr[i])
            {
                large=arr[i];
            }
        }
    }
        printf("%d", large);   
}