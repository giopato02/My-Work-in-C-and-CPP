/*
CH-230-A
a2 p10.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
//converting num of days and hours into just hours
#include <stdio.h>

int main()
{
    int n, hours;
     
    //input
    printf("Enter the number of days: ");
    scanf("%d", &n);
    
    while(n<1){
        printf("%d is an invalid input\n", n);
        printf("Enter the number of days: ");
        scanf("%d", &n);
     }
    
    hours = n * 24; //converts num of days into num of hours
    
    //checks for plural and singular (day & days)
    if(n<=1){
        printf("%d day = %d hours\n", n, hours);
    } else 
        printf("%d days = %d hours\n", n, hours);
    
    return 0;
}
/*
Second Solution
#include <stdio.h>

int main()
{
    int n;

    // Keep asking for input until a valid (positive, non-zero) value is entered
    do {
        printf("Enter a positive, non-zero integer: ");
        scanf("%d", &n);
    } while (n <= 0);

    // Print the conversion table
    for (int i = 1; i <= n; i++) {
        printf("%d day%s = %d hours\n", i, (i == 1) ? "" : "s", i * 24);
    }

    return 0;
}
*/