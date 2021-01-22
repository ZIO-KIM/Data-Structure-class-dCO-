/* 정수 N을 입력 받아, 자리수를 역순으로 출력하시오. 

입력 예시

1234

출력 예시

4321
*/

#pragma warning(disable: 4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	
	int N; 

	scanf("%d", &N); 

	while (N > 0) {
		printf("%d", N % 10); 
		N /= 10; 
	}
	printf("\n"); 

	return 0;
}
