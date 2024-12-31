/*
CH-230-A
a2 p5.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
//Modifying a variable by a pointer
#include <stdio.h>

int main() {
   
   int a; //declares a
   scanf("%d", &a); //input
   printf("a = %d\n", a); //prints the value of a
   
   int * ptr_a; //declares a pointer
   ptr_a = &a; // the pointer points to the address of a variable
   printf("The address contained in the pointer: %p\n", ptr_a);
   
   *ptr_a = *ptr_a + 5;
   printf("Modified value: %d\n", *ptr_a); //modified value
   printf("The address of the changed variable: %p\n", ptr_a);
   
    return 0;
}

/*
Second way to solve this problem:
#include <stdio.h>

int main()
{
    int a;

    scanf("%d", &a);
    printf("%d\n", a);

    int *ptr_a = &a;
    printf("%d\n", ptr_a);
    *ptr_a += 5;

    printf("%d", a);

    return 0;
}
*/