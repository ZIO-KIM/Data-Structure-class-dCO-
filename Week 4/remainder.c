#pragma warning(disable: 4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int calculate_remainder(int N1, int N2); 

int main() {
	int N1, N2; 

	scanf("%d %d", &N1, &N2); 

	printf("remainder is : %d\n", calculate_remainder(N1, N2)); 

	return 0;
}

int calculate_remainder(int N1, int N2) {
	int result; 
	result = N1 % N2; 
	return result; 
}
