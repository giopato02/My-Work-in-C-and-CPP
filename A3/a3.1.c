// /*
// CH-230-A
// a3 p1.[c]
// Giorgi Pataridze
// gpataridze@constructor.university
// */
// #include <stdio.h>

// int main() {
    
//     float x; //declares x
//     int n, i; //declares n and i
    
//     scanf("%f", &x); //input
//     scanf("%d", &n);
    
//     //invalid input check
//     while(n<=0){
//         printf("Input is invalid, reenter value\n");
//         scanf("%d", &n);
//     } 
    
//     //prints the float n times
//     for(i = 0; i < n; i++){
//         printf("%f\n", x);
//     }
    
//     return 0;
// }

#include <stdio.h>

int main()
{
    float x;
    int n;
    scanf("%f", &x);
    

    do
    {
        scanf("%d", &n);
        if(n <= 0)
        printf("Input is invalid, reenter value\n");
    } while (n <= 0);

    for(int i = 0; i < n; i++)
    {
        printf("%f\n", x);
    }

    return 0;
}