#include <stdio.h>

// Define macros
#define GET_BIT(num, n) ((num >> n) & 1)
#define SET_BIT(num, n) (num | (1 << n))
#define CLEAR_BIT(num, n) (num & ~(1 << n))

int main() {
    int num = 42;  // Binary: 101010
    int n = 3;

    // Get the Nth bit
    int bit = GET_BIT(num, n);
    printf("The %dth bit of %d is: %d\n", n, num, bit);

    // Set the Nth bit
    num = SET_BIT(num, n);
    printf("After setting the %dth bit, num is: %d\n", n, num);

    // Clear the Nth bit
    num = CLEAR_BIT(num, n);
    printf("After clearing the %dth bit, num is: %d\n", n, num);

    return 0;
}
