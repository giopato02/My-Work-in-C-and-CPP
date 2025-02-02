/*
CH-230-A
a4 p3.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
// Switch Statement
// #include <stdio.h>
// #include <math.h>

// // Function calculating the geometric mean
// float geometric_mean(float arr[], int num)
// {
//     float returnVal = 1;
//     for (int i = 0; i < num; i++)
//     {
//         returnVal *= arr[i];
//     }
//     return pow(returnVal, 1.0 / num);
// }
// // Function finding the highest num
// float highest_num(float arr[], int index)
// {
//     float max = arr[0];
//     for (int i = 1; i < index; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }
//     return max;
// }
// // Function finding the smallest num
// float smallest_num(float arr[], int index)
// {
//     float min = arr[0];
//     for (int i = 1; i < index; i++)
//     {
//         if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//     }
//     return min;
// }
// // Function calculating the sum of all elements
// float sum(float *arr, int maxindex)
// {
//     float returnVal = 0;
//     for (int i = 0; i < maxindex; i++)
//     {
//         returnVal += arr[i];
//     }
//     return returnVal;
// }

// int main()
// {
//     float arr[15]; // array holding 15 elements
//     char results;
//     int i;

//     // Inputing numbers in the array and stopping on a negative num
//     for (i = 0; i < 15; i++)
//     {
//         float tmp;
//         scanf("%f", &tmp);
//         if (tmp < 0)
//             break;
//         arr[i] = tmp;
//     }

//     // Input code for char
//     scanf(" %c", &results);
//     switch (results)
//     {
//     case 'm': // geometric mean
//         printf("%f", geometric_mean(arr, i));
//         break;
//     case 'h': // highest num
//         printf("%f", highest_num(arr, i));
//         break;
//     case 'l': // smallest num
//         printf("%f", smallest_num(arr, i));
//         break;
//     case 's': // sum of all nums
//         printf("%f", sum(arr, i));
//         break;
//     }

//     return 0;
// }

// Second solution
#include <stdio.h>
#include <math.h>

float geometric_mean(float arr[], int num)
{
    float product = 1.0;
    float sqrt1;
    for(int i = 0; i < num; i++)
    {
        product *= arr[i];
    }
    float nth_root = pow(product, 1.0 / num);

    return nth_root;
}
float highest_num(float arr[], int n)
{
    float temp = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > temp)
        {
            temp = arr[i];
        }
    }
    return temp;
}
float smallest(float arr[], int a)
{
    float temp = arr[0];
    for(int i = 0; i < a; i++)
    {
        if(arr[i] < temp)
        {
            temp = arr[i];
        }
    }
    return temp;
}
float sum(float arr[], int a)
{
    float sum;
    for(int i = 0; i < a; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    float arr[15];
    char c;
    int n = 0;
    
    for (int i = 0; i < 15; i++)
    {
        scanf("%f", &arr[i]);
        if(arr[i] < 0.0)
        {
            break;
        }
        n++;
    }

    printf("Enter a char: ");
    scanf(" %c", &c);

    switch (c)
    {
    case 'm':
        printf("The geometric mean of the elements in the array: %f", geometric_mean(arr, n));
        break;
    case 'h':
        printf("The highest element in the array: %f", highest_num(arr, n));
        break;
    case 'l':
        printf("The smallest element in the array: %f", smallest(arr, n));
        break;
    case 's':
        printf("Sum of the elements in the array: %f", sum(arr, n));
        break;
    }

    return 0;
}