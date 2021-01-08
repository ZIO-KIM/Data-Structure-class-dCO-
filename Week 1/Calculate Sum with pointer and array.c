/* 문제   
크기 10인 배열을 선언하고, 
자연수 10개를 입력받아 입력받은 자연수들의 총합을 구하는 프로그램을 작성하시오. 
조건 1) 합을 계산하는 기능은 메인함수에서 수행하지 말고 calculate_sum 함수를 만들어 사용하시오. 
조건 2) calculate_sum 함수에서 배열을 전달받을 때, 포인터 변수를 활용하시오.  */
/* 
입력예시 : 1 2 3 4 5 6 7 8 9 10
출력예시 : 55 */



#pragma warning(disable: 4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int calculate_sum(int *array); 

int main()
{
	int num[10]; 
	int i, result; 

	for (i = 0; i < 10; i++) {
		scanf("%d", &num[i]); 
	}

	result = calculate_sum(num); // 중요 부분

	printf("%d\n", result); 

	return 0; 
}

int calculate_sum(int *array) {
	int i, sum = 0; 

	for (i = 0; i < 10; i++) {
		sum += array[i]; 
	}

	return sum; 
}
