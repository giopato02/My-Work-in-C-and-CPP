/*
CH-230-A
a6 p7.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
// #include <stdio.h>

// // Function to print the binary representation of an unsigned char
// void print_binary(unsigned char n)
// {
//     for (int i = 7; i >= 0; i--)
//     {
//         printf("%d", (n >> i) & 1); // Print each bit from MSB to LSB
//     }
//     printf("\n");
// }

// // Function to set three bits of an unsigned char to 1
// unsigned char set3bits(unsigned char c, int bit1, int bit2, int bit3)
// {
//     // Set the specified bits to 1 using bitwise OR and shifting
//     c |= (1 << bit1);
//     c |= (1 << bit2);
//     c |= (1 << bit3);
//     return c;
// }

// int main()
// {
//     unsigned char ch;
//     int bit1, bit2, bit3;

//     // input code for the unsigned char and the three bits to be set
//     scanf("%c", &ch);
//     scanf("%d %d %d", &bit1, &bit2, &bit3);

//     // Print the decimal and binary representation before modification
//     printf("The decimal representation is: %d\n", ch);
//     printf("The binary representation is: ");
//     print_binary(ch);

//     // Call the function to set the specified bits
//     ch = set3bits(ch, bit1, bit2, bit3);

//     // Print the binary representation after modification
//     printf("After setting the bits: ");
//     print_binary(ch);

//     return 0;
// }

// #include <stdio.h>

// void bit(unsigned char ch)
// {
//     for(int i = 7; i >= 0; i--)
//     {
//         printf("%d", ((ch >> i) & 1)); // 5(ch) = 1111 1111
//                                        //         0000 0001 (print 0)

//                                        //         0000 0000
//                                        //         0000 0001 (print 0)

//                                        //         0000 0000
//                                        //         0000 0001 (print 0)

//                                        //         0000 0000
//                                        //         0000 0001 (print 0)

//                                        //         0000 0000
//                                        //         0000 0001 (print 0)

//                                        //         0000 0001
//                                        //         0000 0001 (print 1)

//                                        //         0000 0010 
//                                        //         0000 0001 (print 0)

//                                        //         0000 0101
//                                        //         0000 0001 (print 1)
//     }
//     printf("\n");
// }

// unsigned char setbits(unsigned char ch, int bit1, int bit2, int bit3)
// {

//     ch |= (1 << bit1);
//     ch |= (1 << bit2);
//     ch |= (1 << bit3);

//     return ch;
// }

// int main()
// {
//     unsigned char c;
//     int bit1, bit2, bit3;
//     scanf("%c", &c);
//     scanf(" %d", &bit1);
//     scanf(" %d", &bit2);
//     scanf(" %d", &bit3);

//     printf("The decimal representation is: %d\n", c);
//     printf("The binary representation is: ");
//     bit(c);

//     c = setbits(c, bit1, bit2, bit3);
//     printf("After setting the bits: ");
//     bit(c);

//     return 0;
// }

#include <stdio.h>

void bitrep(unsigned char c)
{
    for(int i = 7; i >= 0; i--)
    {
        printf("%d", (c >> i) & 1);
    }
    printf("\n");
}

unsigned char setbits(unsigned char c, int bit1, int bit2, int bit3)
{
    // 0011 0010
    // 0000 0001 << bit1 = 5 0010 0000 prints(1)
    c |= (1 << bit1);
    c |= (1 << bit2);
    c |= (1 << bit3);

    return c;
}

int main()
{
    unsigned char ch;
    int bit1, bit2, bit3;

    scanf("%c", &ch);
    scanf("%d %d %d", &bit1, &bit2, &bit3);

    printf("The decimal representation: %d\n", ch);
    printf("the binary representation: ");
    bitrep(ch);

    ch = setbits(ch, bit1, bit2, bit3);

    printf("after setting bits: ");
    bitrep(ch);

    return 0;
}