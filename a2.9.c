/*
CH-230-A
a2 p9.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
#include <stdio.h>

int main() {
    
    char a;

    printf("Enter a character: "); //input code
    scanf("%c", &a);

    // Check if the character is a letter
    if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')) {
        printf("%c is a letter.\n", a);
    }
    // If it is not a letter, it is some other symbol therefore:
    else {
        printf("%c is some other symbol.\n", a);
    }

    return 0;
}
