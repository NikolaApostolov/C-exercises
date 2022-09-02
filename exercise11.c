#include <stdio.h>

int main (void) {
	
	static const int digits[10][7] = {
		{1,1,1,0,1,1,1},
		{0,0,1,0,0,1,0},
		{1,0,1,1,1,0,1},
		{1,0,1,1,0,1,1},
		{0,1,1,1,0,1,0},
		{1,1,0,1,0,1,1},
		{1,1,0,1,1,1,1},
		{1,0,1,0,0,1,0},
		{1,1,1,1,1,1,1},
		{1,1,1,1,0,1,0}
	};
	
	void print_digit(int digit) {
    printf(" %c \n",  (digits[digit][0]) ? '-' : ' ');
    printf("%c %c\n", (digits[digit][1]) ? '|' : ' ', (digits[digit][2]) ? '|' : ' ');
    printf(" %c \n",  (digits[digit][3]) ? '-' : ' ');
    printf("%c %c\n", (digits[digit][4]) ? '|' : ' ', (digits[digit][5]) ? '|' : ' ');
    printf(" %c \n",  (digits[digit][6]) ? '-' : ' ');
}
	
	char n;
	printf(" Please enter a number\n");
	printf(" When you want to exit press 'q' \n");
	
	while ( n != 113) {
	scanf(" %c", &n);
	
	int m = n;
	m = m - 48;
	
	if (m < 10){
		
		print_digit(m);
		
	}
	else printf(" Error");

	}
	
	return 0;

}