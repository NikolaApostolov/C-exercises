#include <stdio.h>

int main (void) {
	
	int num1;
	int num2;
	
	int *p1 = &num1;
	int *p2 = &num2;
	
	printf ("Input for num1: \n");
	scanf("%d", p1);
	printf ("Input for num2: \n");
	scanf("%d", p2);
	
	int sum = *p1 + *p2;
	int dif = *p1 - *p2;
	int prd = *p1 * *p2;
	int qut = (prd - prd);
	
	printf ("Sum = %d\n", sum);
	printf ("Difference = %d\n", dif);
	printf ("Product = %d\n", prd);
	printf ("Quotient = %d\n", qut);
	
	return 0;

}