#include<stdio.h>
#include <string.h>
int main()
{
    int i=0;
    char n[100];
    char a[100];
    char b[100];
    printf("Enter the String 1 : ");
    scanf("%s",a);
    printf("Enter the String 2 : ");
    scanf("%s",b);
    if(strlen(a)!=strlen(b))
    {
        printf("Entered Strings are not equal");
        return(0);
    }
    
    while(i!=strlen(a))
    {
        //printf("%d\n",i);
        if(a[i]==b[i])
        {
            i++;
        continue;
        }
    else
    {
        printf("Entered Strings are not equal");
        return(0);
    }
      i++;  
    }
    printf("Entered Strings are equal");
    
    return 0;
}
    