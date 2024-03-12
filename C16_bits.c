#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int n,p,m;
    int i=0;
    int j=0;
    int run=0;
    int sum=0;
    int rem,len;
    printf("Enter the number : ");
    scanf("%d",&n);
    m=n;
    if(n==1)
    {
        printf("11111111111111111111111111111111");
        return 0;
    }
    while(m!=0)
    {
        rem=m%2;
        m=m/2;
        sum=sum+rem*pow(10,j);
        j++;
    }
    // len=strlen(sum);
    // i=32-len;
    // for(p=0;p<i;p++)
    // {
    //     printf("0");
    // }
    printf("%d", sum);
}