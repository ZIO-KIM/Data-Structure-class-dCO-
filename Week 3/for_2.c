/* 문자와 정수를 입력 받아, 문자를 정수 개수만큼 출력하기
(for 반복문을 활용하시오.)

입력 예시

a 6

출력 예시

a  a  a  a  a  a
*/

#pragma warning(disable: 4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	
	char ch; 
	int num; 
	int i; 

	scanf("%c %d", &ch, &num); 

	for (i = 0; i < num; i++) {
		printf("%c ", ch); 
	}
	printf("\n"); 

	return 0;
}
