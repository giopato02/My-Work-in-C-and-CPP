/*
CH-230-A
a2 p2.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
#include <stdio.h>

int main() {
	
	char let1; // Declare a character variable
	
	scanf("%c", &let1); //input a character

	//print the character in different notations
	printf("character=%c\n", let1);
	printf("decimal=%d\n", let1);
	printf("octal=%o\n", let1);
	printf("hexadecimal=%X\n", let1);
 
	return 0;
}