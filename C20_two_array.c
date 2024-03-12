#include<stdio.h>
int main()
{
    int i,j,n,m,k;
    int arr1[50],arr2[50];
    int count=0;
    printf("Enter the array1 size : ");
    scanf("%d",&n);
    printf("Enter the array2 size : ");
    scanf("%d",&m);
    printf("Enter the array1 elements : ");
    // while(i!=n)
    // {
    // scanf("%d",&i);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the array2 elements : ");
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr2[i]);
    }
    if(n!=m)
    {
        printf("Array elements are not equal.");
        return 0;
    }
    for(j=0;j<n;j++)
    {
        for(k=0;k<m;k++)
        {
            if(arr1[j]==arr2[k])
            {
                count++;
            }
        }
    }
    if(count==m)
    {
        printf("Array elements are equal.");
    }
    else
    {
        printf("Array elements are not equal.");
    }
    return 0;
}
