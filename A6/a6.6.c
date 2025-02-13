/*
CH-230-A
a6 p6.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
#include <stdio.h>

void print_binary(unsigned char n)
{
    printf("The binary representation is: ");

    // Loop through each bit in the unsigned char (8 bits)
    for (int i = 7; i >= 0; i--)
    {
        // Create a mask by shifting 1 left by i bits
        unsigned char mask = 1 << i;

        // Check if the ith bit is 1 or 0
        if (n & mask)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");
}

int main()
{
    unsigned char ch;

    // input code for a single character input
    scanf("%c", &ch);

    // print the decimal representation of the character
    printf("The decimal representation is: %d\n", ch);

    // print the binary representation
    print_binary(ch);

    return 0;
}
