#include <stdio.h>

int main (void) {
	
	char number[3];
	
	printf ("Enter a two-digit positive integer: ");
	scanf (" %2c", number);
	
	printf ("The reversal is: %c%c", number[1], number[0]);
	
	return 0;

}