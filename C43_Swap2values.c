#include<stdio.h>
#include<string.h>
#define swap(x,y) { \
    int temp = x; \
    x = y; \
    y = temp; \
}

#define sswap(x,y) { \
    char temp[100]; \
    strcpy(temp, x); \
    strcpy(x, y); \
    strcpy(y, temp); \
}

int main()
{
    int num1, num2;
    printf("Enter the num1: ");
    scanf("%d", &num1);
    printf("Enter the num2: ");
    scanf("%d", &num2);

    sswap(num1, num2);

    printf("After Swapping:\n");
    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);
    return 0;
}