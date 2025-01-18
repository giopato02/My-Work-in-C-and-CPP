/*
CH-230-A
a4 p2.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
// Scatter the String
// #include <stdio.h>

// int main()
// {
//     char string[50]; // Array that holds 50 characters;
//     int i;

//     // Input code
//     printf("Enter a word(s): ");
//     fgets(string, sizeof(string), stdin);

//     for (i = 0; string[i] != '\0'; i++)
//     {
//         if (i % 2 == 1)
//             printf(" ");
//         printf("%c\n", string[i]);
//     }

//     return 0;
// }

// Second Solution
#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int length = strlen(str);

    for(int i = 0; i < length; i++)
    {
        if(i % 2 == 0)
        {
            printf("%c\n", str[i]);
        }
        else
        {
            printf(" %c\n", str[i]);
        }
    }

    return 0;
}