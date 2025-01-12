// /*
// CH-230-A
// a3 p7.[c]
// Giorgi Pataridze
// gpataridze@constructor.university
// */
// #include <stdio.h>

// // Create a function that prints the height and bases of the output
// void printf_form(int n, int m, char c)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int width = m + i; // Width of the current row

//         // Print the characters for the current row increasingly
//         for (int g = 0; g < width; g++)
//         {
//             printf("%c", c);
//         }
//         printf("\n"); // Next line after each row
//     }
// }

// int main()
// {
//     int n, m;
//     char c;

//     // Input height top base and the character with which we will draw the trapezoid
//     printf("Enter height: ");
//     scanf("%d", &n);
//     printf("Enter the top base: ");
//     scanf("%d", &m);
//     printf("Enter a character: ");
//     scanf(" %c", &c); // The space before %c is necessary to ignore leftover whitespace characters

//     // Calling the function
//     printf_form(n, m, c);

//     return 0;
// }