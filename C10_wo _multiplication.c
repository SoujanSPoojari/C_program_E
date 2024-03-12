// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int m,n;
    int sum=0;
    printf("Enter the two numbers: ");
    scanf("%d %d",&m,&n);
    for(int i=0;i<m;i++)
    {
        sum+=n;
    }
        printf("The Result is %d\n",sum);
        return 0;
}