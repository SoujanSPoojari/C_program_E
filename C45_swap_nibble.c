#include <stdio.h>
#include <stdlib.h>

// Define a structure with bit fields for nibbles
typedef struct {
    unsigned int lower_nibble : 4;
    unsigned int upper_nibble : 4;
} NibbleSwapper;

int main() {
    char hexInput[3]; // To store the user input (2 hex digits + null terminator)
    unsigned char value;
    NibbleSwapper ns;

    // Read hexadecimal value from user
    printf("Enter the hexadecimal value: ");
    scanf("%2s", hexInput);

    // Convert the input string to an unsigned char (8-bit value)
    value = (unsigned char)strtol(hexInput, NULL, 16);

    // Assign the value to the bit fields
    ns.lower_nibble = value & 0x0F;
    ns.upper_nibble = (value >> 4) & 0x0F;

    // Swap the nibbles
    unsigned char swappedValue = (ns.lower_nibble << 4) | ns.upper_nibble;

    // Print the swapped value in hexadecimal format
    printf("After swap nibble: %02X\n", swappedValue);

    return 0;
}
