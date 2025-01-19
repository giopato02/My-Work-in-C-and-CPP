/*
CH-230-A
a4 p3.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
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