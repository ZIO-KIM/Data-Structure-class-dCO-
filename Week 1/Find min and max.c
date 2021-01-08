#pragma warning(disable: 4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int array[5]; 
	int i, j; 
	int min, max, tmp; 

	for (i = 0; i < 5; i++) {
		scanf("%d", &array[i]); 
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (array[i] < array[j]) {
				tmp = array[i]; 
				array[i] = array[j]; 
				array[j] = tmp; 
			}
		}
	}

	max = array[4]; 
	min = array[0]; 
	
	/*for (i = 0; i < 5; i++) {
		printf("%d ", array[i]); 
	}
	printf("\n"); */

	printf("max : %d\n", max); 
	printf("min : %d", min); 

	return 0; 
}
