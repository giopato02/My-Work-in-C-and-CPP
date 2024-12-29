/*
CH-230-A
a2 p3.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
#include <stdio.h>

int main() {
	
	int weeks = 0, days = 0, hours = 0; // Declare variables
	
	// Input values for weeks, days, and hours
	printf("input weeks: ", weeks);
	scanf("%d", &weeks);
	printf("input days: ", days);
	scanf(" %d", &days);
	printf("input hours: ", hours);
	scanf(" %d", &hours);
	
	// Calculate total number of hours
	int NumOfHours = (days*24) + (weeks*168) + hours;
	printf("%d\n", NumOfHours);

	return 0;
}