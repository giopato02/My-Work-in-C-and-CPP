// /*
// CH-230-A
// a3 p8.[c]
// Giorgi Pataridze
// gpataridze@constructor.university
// */
// #include <stdio.h>

// // Function calculating the sum of numbers
// float sum_of_numbers(int n, float arr[])
// {
//     float sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//     }

//     return sum;
// }

// // Function calculating the average of numbers
// float average_of_numbers(int n, float arr[])
// {
//     return sum_of_numbers(n, arr) / n;
// }

// int main()
// {
//     float arr[10]; // Array that stores up to 10 variables
//     int count = 0; // Tracks how many numbers are entered
//     float num;

//     // Loops up to 10 numbers / stops if -99.0 is entered
//     for (int i = 0; i < 10; i++)
//     {
//         printf("Enter a number: ");
//         scanf("%f", &num);

//         if (num == -99.0)
//         {
//             break; // Stops input if -99 is entered
//         }

//         arr[count] = num;
//         count++;
//     }
//     // Only prints the sum and average if valid numbers are entered
//     if (count > 0)
//     {
//         printf("Sum = %f\n", sum_of_numbers(count, arr));
//         printf("Average = %f\n", average_of_numbers(count, arr));
//     }
//     else
//     {
//         printf("No valid numbers entered.\n");
//     }

//     return 0;
// }


#include <stdio.h>

float sum(float arr[], int a)
{
    float sum = 0.0;
    for(int i = 0; i < a; i++)
    {
        sum += arr[i];
    }
    return sum;
}
float average(float arr[], int n)
{
    //float mean = sum(arr, n) / n;
    return sum(arr, n) / n;
}

int main()
{
    float arr[10];
    int count = 0;

    for(int i = 0; i < 10; i++)
    {
        scanf("%f", &arr[i]);
        
        if(arr[i] == -99.0)
        {
            break;
        }
        count++;
    }
    printf("The sum of floats: %f\n", sum(arr, count));
    printf("The average of floats: %f\n", average(arr, count));

    return 0;
}