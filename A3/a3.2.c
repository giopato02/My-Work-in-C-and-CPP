/*
CH-230-A
a3 p2.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
// #include <stdio.h>

// int main()
// {

//     char ch;  // declares character variable
//     int n, i; // declares int variables

//     // input code
//     scanf("%c", &ch);
//     scanf("%d", &n);

//     printf("%c", ch);

//     // for loop function
//     for (i = 1; i <= n; i++)
//     {
//         printf(", %c-%d", ch, i);
//     }

//     return 0;
// }
//Second way to solve the problem

#include <stdio.h>

int main()
{
    char ch;
    int n;

    scanf("%c", &ch);
    scanf("%d", &n);

    printf("%c, ", ch);

    for(int i = 1; i < n; i++)
    {
        printf("%c-%d, ", ch, i);
    }
    printf("%c-%d", ch, n);
    return 0;
}