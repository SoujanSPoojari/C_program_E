// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() {
    // Write C code here
    int n,rem,i;
    int sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    int m=n;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        sum=sum*10+rem;
        i++;
    }
        if(m==sum)
        {
        printf("The Entered number is an palindrome.");
        }
        else
        {
        printf("The Entered number is not an palindrome.");
        }
    return 0;
}