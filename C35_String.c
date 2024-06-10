#include<stdio.h>
#include<string.h>
int main()
{
    int i=0;
    int n;
    char arr1[100];
    char arr2[100];
    printf("Enter the string1 : ");
    scanf("%s", &arr1);
    printf("Enter the string2 : ");
    scanf("%s", &arr2);
    printf("Enter the n : ");
    scanf("%d", &n);
    while(arr1[i] != '\0' && arr2[i] != '\0' && i<n)
    {
        if(arr1[i] == arr2[i])
        {
            i++;
            continue;
        }
        else if(arr1[i] > arr2[i])
        {
            printf("String1 is greater than String2");
            return 0;
        }
        else
        {
            printf("str2 is less then str1.");
            return 0;
        }
    }

if(i==n)
{
    printf("String1 is equal to string2");
}
return 0;
}