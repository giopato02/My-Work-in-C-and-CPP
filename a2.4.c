/*
CH-230-A
a2 p4.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
//Calculating the areas of different shapes
#include <stdio.h>

int main() {
	
	float a=0, b=0, h=0; // Declare and initialize variables
	
	// Input values for a, b, and h
	printf("input the value a: ", a);
	scanf("%f", &a);
	printf("input the value b: ", b);
	scanf(" %f", &b);
	printf("input the value h: ", h);
	scanf(" %f", &h);

	// Calculate and print areas
	printf("square area=%f\n", a*a);
	printf("rectangle area=%f\n", a*b);
	printf("triangle area=%f\n", (a*h)/2);
	printf("trapezoid area=%f\n", ((a+b)/2)*h);

	return 0;
}