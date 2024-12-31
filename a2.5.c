/*
CH-230-A
a2 p5.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
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