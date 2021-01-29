#pragma warning(disable: 4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void print_characters(char c, int n); 

int main() {
	
	char c; 
	int i; 

	c = 'a'; 

	for (i = 1; i <= 26; i++) {
		print_characters(c, i); 
		c++; 
	}

	return 0;
}

void print_characters(char c, int n) {
	
	int i; 

	for (i = 0; i < n; i++) {

		printf("%c", c); 

	}
	printf("\n"); 
}
