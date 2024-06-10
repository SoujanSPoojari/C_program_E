#include<stdio.h>
#include<string.h>
#define SWAP(A,B) { \
    temp t = A; \
    A = B;\
    B = temp; \
}

int main()
{
    int A,B;
    char string[50];
    printf("Enter the hexa-decimal value: ");
    scanf("%d",&A);
    printf("After swap nibble : %s", SWAP(AB));
    return 0;
}