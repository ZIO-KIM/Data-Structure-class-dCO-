/* 0 또는 음수가 입력될 때까지 정수를 입력 받아, 입력 받은 정수의 합을 구하시오.
(단, 입력된 0 또는 음수는 합에 포함하지 않는다.) 
(while 반복문을 활용하시오.)

입력 예시

1  2  3  4  5  -1

출력 예시

15
*/

#pragma warning(disable: 4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	
	int N; 
	int sum = 0; 

	scanf("%d", &N); 

	while (N > 0) {
		sum += N; 
		scanf("%d", &N); 
	}

	printf("%d\n", sum); 

	return 0;
}
