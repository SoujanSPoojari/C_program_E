#include<stdio.h>
int main()
{
    int i,j,n,m;
    float avg;
    int sum=0;
    printf("Enter the size: ");
    scanf("%d",&n);
    int arr[n]; //why n?
    printf("Enter the array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        arr[i]=m; //why m?
        sum+=arr[i];
    }
        avg=(float)sum/n;
    printf("%0.1f",avg);
    return 0;
}