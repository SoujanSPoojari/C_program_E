#include<stdio.h>
int square(int arr[], int size);
int square(int arr[], int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        arr[i]=arr[i]*arr[i];
        printf(" %d", arr[i]);
    }
}
    int main()
    {
        int n,i;
        int arr[50];
        printf("Enter the size : ");
        scanf("%d",&n);
        printf("Enter the array elements : ");
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        square(arr,n);
        printf("\n");
        return 0;
    }