/*
CH-230-A
a6 p5.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
#include <stdio.h>

void print_binary_backwards(unsigned char n)
{
    printf("The backwards binary representation is: ");

    // Loop through each bit in the unsigned char (8 bits)
    for (int i = 0; i < 8; i++)
    {
        // Extract the least significant bit (LSB) and print it
        printf("%d", n & 1);

        // Right-shift n to process the next bit
        n >>= 1;
    }
    printf("\n");
}

int main()
{
    unsigned char ch;

    // input code for a single character input
    scanf("%c", &ch);

    // Print the decimal representation of the character
    printf("The decimal representation is: %d\n", ch);

    // Print the binary representation backwards
    print_binary_backwards(ch);

    return 0;
}
