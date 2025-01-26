/*
CH-230-A
a4 p11.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Function counting a character in a string
int count_insensitive(char *str, char c)
{
    int count = 0;
    char lower_c = tolower(c); // Convert the character to lowercase for case-insensitive comparison

    // Traverse the string
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (tolower(str[i]) == lower_c)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    char *str;
    char *resized_str;
    int len;

    // Dynamically allocate memory for a string of 50 characters
    str = (char *)malloc(50 * sizeof(char));
    if (str == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input code for string
    printf("Enter a string: ");
    fgets(str, 50, stdin);

    // Remove newline character
    len = strlen(str);
    if (str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
        len--; // Adjust length to remove newline
    }

    // Dynamically allocate memory for the exact size of the entered string
    resized_str = (char *)malloc((len + 1) * sizeof(char));
    if (resized_str == NULL)
    {
        printf("Memory allocation failed!\n");
        free(str); // Free the original string
        return 1;
    }

    // Copy the original string to the resized string
    strcpy(resized_str, str);

    // Deallocate memory
    free(str);

    // Determine the occurrence of the characters ’b’, ’H’, ’8’, ’u’, and ’$’
    char test_chars[] = {'b', 'H', '8', 'u', '$'};
    for (int i = 0; i < 5; i++)
    {
        char c = test_chars[i];
        int occurrences = count_insensitive(resized_str, c);
        printf("The character '%c' occurs %d times.\n", c, occurrences);
    }

    // Free the resized string
    free(resized_str);

    return 0;
}