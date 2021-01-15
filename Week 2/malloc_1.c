/* 문제 */
/* N개의 정수를 입력 받아 동적 메모리 할당을 사용하여 배열에 저장한 후, 저장된 배열 요소들의 합을 출력하는 프로그램을 작성하시오. 
입력예시
6          
3  2  0  1  4  6   

출력예시


16
*/

#pragma warning(disable: 4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void) {
	int N; 
	int *array;
	int i, sum = 0; 

	scanf("%d", &N); 

	array = (int*)malloc(N * sizeof(int)); 
	if (array == NULL) {
		printf("Malloc error!"); 
		exit(1); 
	}

	for (i = 0; i < N; i++) {
		scanf("%d", &array[i]); 
		sum += array[i]; 
	}

	printf("%d", sum); 

	return 0; 
}


