#include <stdio.h>

int main (void) {
	
	char buff01[31];
	char buff02[31];
	char buff03[4];
	
	printf ("What is your name?\n");
	scanf (" %30s", buff01);
	
	printf ("What is your favourite colour?\n");
	scanf (" %30s", buff02);
	
	printf ("How old are you?\n");
	scanf (" %3s", buff03);
	
	printf ("Hello %s who is %s years old and whose favourite colour is %s", buff01, buff03, buff02);
	
	return 0;

}