/*
CH-230-A
a5 p3.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
#include <stdio.h>

// function for counting lowercase letters in the input
int count_lower(char *str)
{
    int count = 0;
    for (int i = 0; *(str + i) != '\0'; i++)
    {
        // check if the character is lowercase
        if (*(str + i) >= 'a' && *(str + i) <= 'z')
        {
            count++; // add 1 for each lowercase character
        }
    }
    return count;
}

int main()
{
    while (1)
    {
        char arr[50];
        // input code
        fgets(arr, sizeof(arr), stdin);

        // check for a newline input and finish the program if there is one
        if (arr[0] == '\n')
        {
            break;
        }

        // call the function
        printf("Number of lowercase letters: %d\n", count_lower(arr));
    }

    return 0;
}