#include<stdio.h>
#include<stdbool.h>
bool check(int val);
bool check(int x)
{
    //int x;
    if(x%2==0)
        return true;
    else
        return false;
}
int main()
{
    int x;
    printf("Enter the number : ");
    scanf("%d",&x);
    bool val;
    val=check(x);
    if(val==true)
    printf("TRUE");
    else
    printf("FALSE");
}

