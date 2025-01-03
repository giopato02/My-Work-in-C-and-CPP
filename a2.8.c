/*
CH-230-A
a2 p8.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
//Check if the number is divisible by 2 and 7
#include <stdio.h>
int main(){
    int Num;
    scanf("%d", &Num); //input
    
    if(Num % 2 == 0 && Num % 7 == 0)/*cheks if the number is a integer*/ {
        printf("The number is divisible by 2 and 7\n");
    } 
    else {
    printf("The number is NOT divisible by 2 and 7\n");
    }
    
    
return 0;
}

/*
Second Solution
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    if(n % 2 == 0 && n % 7 == 0)
    {
        printf("The number is divisible by 2 and 7\n");
    }
    else{
        printf("The number is NOT divisible by 2 and 7\n");
    }

    return 0;
}
*/