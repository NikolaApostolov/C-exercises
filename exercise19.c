#include <stdio.h>

int main (void) {
	
	int size = 6;
	
	int arr1[size];
	int *ptr = &arr1[0];
	
	printf ("Input array1 elements: \n");
	for (int i=0; i < size; i++) {
		scanf (" %d", (ptr + i));
	}
	
	int arr2[size];
	
	for (int i=0; i < size; i++) {
		arr2[i] = *(ptr + i);
	}
	
	printf ("Array1: ");
	for (int i=0; i < size; i++) {
		printf (" %d ", arr1[i]);
	}
	printf (" \n");
	
	printf ("Array2: ");
	for (int i=0; i < size; i++) {
		printf (" %d ", arr2[i]);
	}
	printf (" \n");
	
	return 0;

}