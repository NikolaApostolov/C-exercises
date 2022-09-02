#include <stdio.h>

int main (void) {
	
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *ptr = &arr[0];
	int size = sizeof(arr)/sizeof(arr[0]);
	
	char arr2[5][5] = {
		{'A', 'B', 'C', 'D', 'E'},
		{'F', 'G', 'H', 'I', 'J'},
		{'K', 'L', 'M', 'N', 'O'},
		{'P', 'Q', 'R', 'S', 'T'},
		{'U', 'V', 'W', 'X', 'Y'},
	};
	char *ptr2 = &arr2[0][0];
	
	for (int i = 0; i < size; i++) {
		
		printf(" %d\n", *(ptr + i));
		
	}
	
	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 5; x++) {
		
			printf(" %c", *(ptr2 + x + 5*y));
		
		}
		
	}
	
	return 0;

}