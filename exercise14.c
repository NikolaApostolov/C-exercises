#include <stdio.h>

int main (void) {
	
	int num = 10;
	int *p = &num;
	
	printf ("Address of num = %x\n", &num);
	printf ("Value of num = %d\n", num);
	printf ("Address of ptr = %x\n", &p);
	printf ("Value of ptr = %d\n", p);
	printf ("Value pointed by ptr = %d\n", *p);
	
	return 0;

}