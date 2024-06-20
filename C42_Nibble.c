#include<stdio.h>
#include<string.h>
#define SWAP(A,B) { \
    temp t = A; \
    A = B;\
    B = temp; \
}

#define SSWAP(A,B) { \
    char temp[100]; \
    strcpy(temp, A); \
    strcpy(A, B); \
    strcpy(B, temp); \
}

int main()
{
    int A,B;
    char string[50];
    printf("Enter the hexa-decimal value: ");
    scanf("%s",&string);
    SSWAP(string[0],string[1])
    printf("After swap nibble : %s", string);
    return 0;
}