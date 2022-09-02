#include <stdio.h>

void reverse_string(char *str);

int main (void) {
	
	char arr[6];
	
	printf ("Enter a short string: \n");
	scanf (" %5c", arr);
	
	reverse_string(arr);
	
	printf("Reverse is: %s ", arr);
	
	return 0;

}

void reverse_string(char *str){
	int lenght = 0;
	while (str[lenght] != '\0'){
		lenght++;
	}
	
	char temp;
	char *firstChar = &str[0];
	char *lastChar = &str[lenght-1];
	for (int i = 0; i < (lenght/2); i++){
		temp = *lastChar;
		*lastChar = *firstChar;
		*firstChar = temp;
		
		firstChar++;
		lastChar--;
	}
	
}