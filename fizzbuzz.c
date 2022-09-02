#include <stdio.h>

#define MAX 10
const int len = 3;
const int keys[] = {3, 5, 7};
const char* values[] = {"Fizz", "Buzz", "Bazz"};

int main() {
	
	int printed = 0;
	for (int i=1; i<=MAX; i++) {
		printed = 0;
		for (int j=0; j<len; j++){
			if (0==i%keys[j]){
				printf(values[j]);
				printed = 1;
			}
		}
		if (!printed){
			printf("%d", i);
		}
		printf("\n");
	}
}