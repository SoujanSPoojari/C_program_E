#include<stdio.h>

int main() {
    int i, j;
    char a[100], b[100], c[200];

    printf("Enter the string1 : ");
    scanf("%s", a);
    printf("Enter the string2 : ");
    scanf("%s", b);

    // Copy string a to c
    for (i = 0; a[i] != '\0'; i++) 
    {
        c[i] = a[i];
    }

    // Concatenate string b to c
    for (j = 0; b[j] != '\0'; j++, i++) 
    {
        c[i] = b[j];
    }
    c[i] = '\0';

    printf("Concatenated string is %s", c);

    return 0;
}
