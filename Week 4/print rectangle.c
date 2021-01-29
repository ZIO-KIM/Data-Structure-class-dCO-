#pragma warning(disable: 4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void print_row1(int x); 
void print_row2(int x); 

int main() {

	int N, i; 

	scanf("%d", &N); 

	for (i = 0; i < N; i++) 
	{
		if (i == 0 || i == N - 1) 
		{
			print_row1(N); 
		}
		else
		{
			print_row2(N); 
		}
	}

	return 0;
}

void print_row1(int x) 
{
	int i; 

	for (i = 0; i < x; i++) {
		printf("%d", x); 
	}
	printf("\n"); 
}

void print_row2(int x) 
{
	int i; 

	printf("%d", x); 
	
	for (i = 1; i < x - 1; i++) {
		printf(" "); 
	}

	printf("%d\n", x);
}

