#include<stdio.h>
#include<math.h>
int main()
{
    int n,p,m;
    int i=0;
    int j=0;
    int run=0;
    int sum=0;
    int rem;
    printf("Enter the number : ");
    scanf("%d",&n);
    m=n;
    while(m!=0)
    {
        rem=m%2;
        m=m/2;
        sum=sum+rem*pow(10,j);
        j++;
    }
    // printf("%d", sum);
    n=sum;
    while(n!=0)
    {
    run=n%10;
    n=n/10;
    //sum=sum+run*n;
    if(run==1)
    {
        i++;
    }
    else
    {
        continue;
    }
    }
    printf("The count of set bits is %d",i);
}