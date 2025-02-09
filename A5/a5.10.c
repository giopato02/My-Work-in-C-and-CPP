/*
CH-230-A
a5 p10.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
// #include <stdio.h>

// // Recursive function to print numbers from n to 1
// void print_numbers(int n)
// {
//     if (n > 0)
//     {
//         printf("%d ", n);     // Print current number
//         print_numbers(n - 1); // Recursive call with n-1
//     }
// }

// int main()
// {
//     int n;

//     // input code for a positive integer
//     printf("Enter a positive integer: ");
//     scanf("%d", &n);

//     // call the recursive function
//     print_numbers(n);

//     return 0;
// }

#include <stdio.h>

void recursion(int n)
{
    if (n > 1)
    {
        printf("%d, ", n);
        recursion(n-1);
    }
    
}
// 5, (recursion), 4, (recursion), 3, 

int main()
{
    int n;

    scanf("%d", &n);
    recursion(n);
    printf("1.");
    return 0;
}