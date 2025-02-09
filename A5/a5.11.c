/*
CH-230-A
a5 p11.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
// #include <stdio.h>

// // recursive function to check if a number is prime
// int is_prime_recursive(int x, int divisor)
// {
//     if (divisor == 1)
//     {
//         return 1; // if no divisors are found, number is prime
//     }
//     if (x % divisor == 0)
//     {
//         return 0; // if x is divisible by divisor, it's not prime
//     }
//     // Recursive call with divisor-1
//     return is_prime_recursive(x, divisor - 1);
// }

// int main()
// {
//     int x;

//     // input code for positive integer
//     printf("Enter a positive integer: ");
//     scanf("%d", &x);

//     // exception for numbers less than 2
//     if (x <= 1)
//     {
//         printf("%d is not prime\n", x);
//         return 0;
//     }

//     // call the function
//     if (is_prime_recursive(x, x - 1))
//     {
//         printf("%d is prime\n", x);
//     }
//     else
//     {
//         printf("%d is not prime\n", x);
//     }

//     return 0;
// }

// #include <stdio.h>

// int prime(int x, int a)
// {
//     if(a == 1) return 1;
//     if(x % a == 0) return 0;
//     return prime(x, a - 1);
// }

// int main()
// {
//     int x;
//     printf("enter a positive int: ");
//     scanf("%d", &x);

//     if(x <= 1)
//     {
//         printf("%d is not a prime number", x);
//     }

//     if(prime(x, x - 1))
//     {
//         printf("%d is a prime number", x);
//     }
//     else
//     {
//         printf("%d is not prime", x);
//     }

//     return 0;
// }

#include <stdio.h>

int prime(int x, int a)
{
    if(a == 1) return 1;
    if(x % a == 0) return 0;
    return prime(x, a-1);
}

int main()
{
    int x;
    while (1)
    {
        printf("Enter x: ");
        scanf("%d", &x);
        if(x <= 1)
        {
            printf("not a prime\n");
        }
        if(prime(x, x-1))
        {
            printf("prime\n");
        }
        else
        {
            printf("not a prime\n");
        }
    }

    return 0;
}