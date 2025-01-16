// /*
// CH-230-A
// a3 p11.[c]
// Giorgi Pataridze
// gpataridze@constructor.university
// */
// String Functions

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char one[99];
//     char two[99];
//     char three[99]; // Third string to copy `two` into
//     char c;         // Character to search for in `two`
//     char *pos;      // Pointer to store the position of the found character

//     // Read both strings from the keyboard
//     printf("Enter the first string: ");
//     fgets(one, sizeof(one), stdin);

//     printf("Enter the second string: ");
//     fgets(two, sizeof(two), stdin);

//     // Remove the trailing newline character from both strings if present
//     one[strcspn(one, "\n")] = '\0';
//     two[strcspn(two, "\n")] = '\0';

//     // 1. Print the lengths of both strings
//     printf("Length1=%lu\n", strlen(one));
//     printf("Length2=%lu\n", strlen(two));

//     // 2. Concatenate one with two and print the result
//     char concatenated[198];    // Array to store the concatenated result
//     strcpy(concatenated, one); // Copy 'one' into concatenated
//     strcat(concatenated, two); // Concatenate 'two' to 'one'
//     printf("Concatenation=%s\n", concatenated);

//     // 3. Copy string 'two' into string 'three' and print 'three'
//     strcpy(three, two);
//     printf("copy= %s\n", three);

//     // 4. Compare the two strings and print a corresponding message
//     int comparison = strcmp(one, two);
//     if (comparison > 0)
//     {
//         printf("two is smaller than one\n");
//     }
//     else if (comparison < 0)
//     {
//         printf("one is smaller than two\n");
//     }
//     else
//     {
//         printf("one and two are equal\n");
//     }

//     // 5. Search for a character in 'two'
//     printf("Enter a character to search for in the second string: ");
//     scanf(" %c", &c); // Read the character

//     // Find the first occurrence of the character in 'two'
//     pos = strchr(two, c);
//     if (pos != NULL)
//     {
//         // Calculate the position index
//         int index = (int)(pos - two);
//         printf("position=%d\n", index);
//     }
//     else
//     {
//         printf("The character '%c' is not found in the second string.\n", c);
//     }

//     return 0;
// }

// Second solution
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];
    char concat[200];
    char str3[100];
    char c;

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    size_t length1 = strlen(str1);
    size_t length2 = strlen(str2);

    printf("%d\n", length1);
    printf("%d\n", length2);

    strcpy(concat, str1);
    strcat(concat, str2);
    printf("%s\n", concat);

    strcpy(str3, str2);
    printf("%s\n", str3);

    int compare = strcmp(str2, str1);
    if (str2 > str1)
    {
        printf("The second string is larger than the first one.\n");
    }
    else if (str2 < str1)
    {
        printf("The second string is smaller than the first one.\n");
    }
    else
    {
        printf("The second string is equal to the first one.\n");
    }

    scanf("%c", &c);
    int count;
    for (int i = 0; i < length2; i++)
    {
        if(i == NULL)
        {
            printf("ERROR");
        }
        if (c == str2[i])
        {
            printf("The character %c is found in position %d in %s\n", c, i, str2);
            break;
        }

    }

    return 0;
}