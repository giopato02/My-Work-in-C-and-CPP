/*
CH-230-A
a6 p2.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/

// #include <stdio.h>

// #define DEC(x) ((int)(x)) // Define a macro to convert a value to an integer
// #define LSB(y) ((y) % 2)  // Define a macro to get the least significant bit (LSB) of a number

// int main()
// {
//     unsigned char c;
//     scanf("%c", &c);

//     // Print the decimal representation of the character using the DEC macro
//     printf("The decimal representation is: %d\n", DEC(c));
//     // Print the least significant bit of the decimal representation using the LSB macro
//     printf("The least significant bit is: %d", LSB(DEC(c)));
// }

#include <stdio.h>

#define LeastSignificant(y) y % 2;

int main()
{
    unsigned char c;
    scanf("%c", &c); 

    printf("the decimal reresentation: %d\n", c);
    int lsb = LeastSignificant(c)
    printf("least significant bit: %d\n", lsb);

    return 0;
}