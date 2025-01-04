/*
CH-230-A
a2 p9.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
//Check if the inputted character is a letter or some other symbol
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
/*
second way to solve the problem
#include <stdio.h>

int main()
{
    char y;

    scanf("%c", y);

    if(y > 10){
        printf("%c is a character", y);
    }
    else{
        printf("%c is some other symbol", y)
    }

    return 0;
}
*/