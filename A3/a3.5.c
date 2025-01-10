// /*
// CH-230-A
// a3 p5.[c]
// Giorgi Pataridze
// gpataridze@constructor.university
// */
// #include <stdio.h>

// // Function for calculating the sum of temps
// double sum_of_temp(double arr[], int a)
// {
//     double sum = 0;
//     for (int i = 0; i < a; i++)
//     {
//         sum += arr[i];
//     }

//     return sum;
// }

// // Function for printing the list of temps
// void list_of_temps(double arr[], int a)
// {
//     for (int i = 0; i < a; i++)
//     {
//         printf("%lf\n", arr[i]);
//     }
// }

// // Function for calculating and printing the list of temps in farenheit
// void list_of_farenheit(double arr[], int a)
// {
//     for (int i = 0; i < a; i++)
//     {
//         printf("%lf\n", arr[i] * (9.0 / 5.0) + 32);
//     }
// }

// int main()

// {
//     char c;
//     int n;
//     double temp[100];

//     // Char input
//     printf("Enter a Character: ");
//     scanf("%c", &c);
//     // Int input
//     printf("Enter an integer: ");
//     scanf("%d", &n);

//     // Temp inputs
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%lf", &temp[i]);
//     }

//     // Switch statement for possible character inputs
//     switch (c)
//     {
//     case 's': // Case for printing the sum of temps
//         printf("%lf\n", sum_of_temp(temp, n));
//         break;

//     case 'p': // Case for printing the list of temps
//         list_of_temps(temp, n);
//         break;

//     case 't': // Case for printing the list of temps in farenheit
//         list_of_farenheit(temp, n);
//         break;

//     default: // Default case for calculating arithmetic mean of temps
//         printf("%lf\n", sum_of_temp(temp, n) / n);

//         break;
//     }

//     return 0;
// }

#include <stdio.h>
#include <string.h>

double Sum(double temp[], int a)
{
    double sum;

    for(int i = 0; i < a; i++)
    {
        sum += temp[i];
    }
    return sum;
}
void List(double temp[], int a)
{
    for(int i = 0; i < a; i++)
    {
        printf("%lf", temp[i]);
    }
}
void Convert(double temp[], int a)
{
    for(int i = 0; i < a; i++)
    {
        printf("%lf", temp[i] * (9.0/5.0) + 32);
    }
}

int main()
{
    char c;
    int n;
    double temp[100];

    printf("Enter a character: ");
    scanf("%c", &c);
    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Enter %d temperatures:\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%lf", &temp[i]);
    }

    switch (c)
    {
    case 's':
        printf("Sum of all temps: %lf\n", Sum(temp, n));
        break;
    case 'p':
        printf("List of all temps: ");
        List(temp, n);
        break;
    case 't':
        printf("List of all temps in Fahrenheit: ");
        Convert(temp, n);
        break;
    default:
        printf("Arithmetic mean of all temps: %lf", Sum(temp, n) / n);
        break;
    }

    return 0;
}