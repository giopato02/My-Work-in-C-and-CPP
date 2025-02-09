/*
CH-230-A
a5 p7.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main()
// {
//     char arr1[100], arr2[100];

//     // input code for two strings
//     fgets(arr1, sizeof(arr1), stdin);
//     fgets(arr2, sizeof(arr2), stdin);

//     // Remove newline characters
//     arr1[strcspn(arr1, "\n")] = 0;
//     arr2[strcspn(arr2, "\n")] = 0;

//     // Find the lengths of the two strings
//     int len1 = strlen(arr1);
//     int len2 = strlen(arr2);

//     // Dynamically allocate memory for the concatenated result
//     char *result = (char *)malloc((len1 + len2 + 1) * sizeof(char)); // +1 for the null-terminator

//     if (result == NULL)
//     {
//         printf("Memory allocation failed\n");
//         return 1; // Exit the program if memory allocation fails
//     }

//     // Concatenate the two strings
//     strcpy(result, arr1);
//     strcat(result, arr2);

//     // Print the result
//     printf("Result of concatenation: %s\n", result);

//     // Free the allocated memory
//     free(result);

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    char *result = (char *)malloc((sizeof(str1) + sizeof(str2)) * sizeof(char));
    if(result == NULL)
    {
        return -1;
    }
    strcpy(result, str1);
    strcat(result, str2);

    printf("Result of concatenation: %s", result);

    free(result);

    return 0;
}