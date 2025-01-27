/*
CH-230-A
a4 p12.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
#include <stdio.h>
#include <string.h>

// Function replacing character 'c's with character 'e'
void replaceAll(char *str, char c, char e)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == c)
        {
            str[i] = e;
        }
    }
}

int main()
{
    char str[81]; // String to store up to 80 characters (+1 for null terminator)
    char c, e;

    while (1)
    {
        // Read the string
        printf("Enter a string or 'stop' to exit: ");
        fgets(str, 81, stdin);

        // Remove newline character if present
        size_t length = strlen(str);
        if (str[length - 1] == '\n')
        {
            str[length - 1] = '\0';
        }

        // Check if the user entered "stop"
        if (strcmp(str, "stop") == 0)
        {
            break;
        }

        printf("Enter the character to be replaced: ");
        scanf(" %c", &c);

        printf("Enter the replacing character: ");
        scanf(" %c", &e);

        printf("Original string: %s\n", str);

        // Call the function to replace chars
        replaceAll(str, c, e);
        printf("Modified string: %s\n", str);

        // Clear input buffer after reading characters
        while (getchar() != '\n');
    }

    return 0;
}