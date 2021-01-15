#pragma warning(disable: 4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/* array reallocation 방법 사용 */

int main(void) {
	int N, D; 
	int *student_num; 
	int i; 
	int *tmp; 
	
	scanf("%d", &N); 
	student_num = (int*)malloc(N * sizeof(int)); 
	if (student_num == NULL) {
		printf("Malloc error!"); 
		exit(1); 
	}

	for (i = 0; i < N; i++) {
		scanf("%d", &student_num[i]); 
	}

	scanf("%d", &D); 
	tmp = (int*)malloc((N - D) * sizeof(int)); 

	for (i = 0; i < N - D; i++) {
		tmp[i] = student_num[i]; 
	}

	printf("남은 학생번호는 :\n"); 
	for (i = 0; i < N - D; i++) {
		printf("%d\n", tmp[i]); 
	}

	return 0; 
}


