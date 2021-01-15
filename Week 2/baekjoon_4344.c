#pragma warning(disable: 4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void) {
	int C, N; 
	int i, j; 
	int *score;
	int sum = 0, count_goodStudent = 0; 
	double mean, ratio; 

	scanf("%d", &C); 

	for (i = 0; i < C; i++) {
		scanf("%d", &N); 

		score = (int*)malloc(N * sizeof(int)); 
		if (score == NULL) {
			printf("Malloc error!"); 
			exit(1); 
		}

		for (j = 0; j < N; j++) {
			scanf("%d", &score[j]); 
			sum += score[j]; 
		}

		mean = sum / N; 

		for (j = 0; j < N; j++) {
			if (mean < score[j]) {
				count_goodStudent++; 
			}
		}

		ratio = ((double)count_goodStudent / (double)N) * 100; 
		printf("%.3f", ratio);
		printf("%%\n"); 

		sum = 0; 
		count_goodStudent = 0; 
	}

	return 0; 
}


