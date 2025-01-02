/*
CH-230-A
a2 p7.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
#include <stdio.h>
int main(){
    int i = 8;
    while (i >= 4){
        printf("i is %d\n", i--);
    }
    printf("That's it.\n");
return 0;
}
/*
Second way to solve this problem
#include <stdio.h>
int main()
{
    int i = 8;
    while (i >= 4)
    {
        printf("i is %d\n", i);
        i--;
    }
    printf("That's it.\n");

    return 0;
}
*/