#include<stdio.h>
int main()
{
    int i,j,k,n,m;
    //int min, max;
    int arr[100];
    arr[2][2] = {{1,2},{3,4}}
    printf("Enter the row size : ");
    scanf("%d", &i);
    printf("Enter the column size : ");
    scanf("%d", &j);
    printf("Enter the array elements : ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
        min = arr[0][0];
        for(i=0;i<n;i++)
        {
        for(j=0;j<m;j++)
        {
        if(arr[i][j]<min)
            {
                min=arr[i][j];
            }
            else
            {
                continue;
            }
        }
    max = arr[0][0];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(max<arr[i][j])
            {
                max=arr[i][j];
            }
            else
            {
                continue;
            }
        }
    }
    }
}