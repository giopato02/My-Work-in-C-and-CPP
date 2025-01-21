/*
CH-230-A
a4 p4.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
// count consonants in a string
#include <stdio.h>

// Function counting consonants
int count_consonants(char str[])
{
    char arr[5] = {'a', 'e', 'i', 'o', 'u'};
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        // Check for ASCII code of A-Z and a-z
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        {
            int tmp = 1;
            // Loop through the vowel array to check if the character is a vowel
            for (int j = 0; j < 5; j++)
            {
                if (str[i] == arr[j])
                {
                    tmp = 0; // If it's a vowel, set tmp to 0
                }
            }
            count += tmp; // Add to count if it's a consonant
        }
    }
    return count;
}

int main()
{
    while (1)
    {
        char arr[100];
        // String input code
        fgets(arr, sizeof(arr), stdin);

        if (arr[0] == '\n')
            break; // Break the loop if the input is an empty line

        printf("Number of consonants=%d\n", count_consonants(arr)); // call the function
    }

    return 0;
}