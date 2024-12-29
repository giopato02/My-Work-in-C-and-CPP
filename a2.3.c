/*
CH-230-A
a2 p3.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
#include <stdio.h>

int main()
{

    int weeks = 0, days = 0, hours = 0; // Declare variables

    // Input values for weeks, days, and hours
    printf("input weeks: ", weeks);
    scanf("%d", &weeks);
    printf("input days: ", days);
    scanf(" %d", &days);
    printf("input hours: ", hours);
    scanf(" %d", &hours);

    // Calculate total number of hours
    int NumOfHours = (days * 24) + (weeks * 168) + hours;
    printf("%d\n", NumOfHours);

    return 0;
}

/*second solution:
#include <stdio.h>

int main()
{
    int h, d, w;


    printf("Enter num of weeks: ");
    scanf("%d", &w);
    printf("Enter num of days: ");
    scanf("%d", &d);
    printf("Enter num of hrs: ");
    scanf("%d", &h);

    int sum = h + (d * 24) + (w * 168);

    printf("transforming into hours: %d", sum);

    return 0;
}
*/