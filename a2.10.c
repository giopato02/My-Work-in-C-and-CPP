/*
CH-230-A
a2 p10.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
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