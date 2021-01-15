/* 문제 
다음과 같은 기능을 하는 학생번호 관리 프로그램을 작성하시오. 
등록할 학생번호 수 N을 입력받고, N개의 학생번호를 동적할당을 사용해 입력 (int형 사용)
삭제할 학생번호 개수 D (D < N) 를 입력받고, D만큼 메모리 크기 조정 후 출력
마지막에 입력한 학생번호부터 D개를 삭제한다

입력예시
3    -> N
10113   -> 1학년 1반 13번
21234
30307
2      -> D

출력예시
10113
*/

#pragma warning(disable: 4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/* realloc 사용 */

int main(void) {
	int N, D; 
	int *student_num; 
	int i; 
	
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
	student_num = (int*)realloc(student_num, (N - D) * sizeof(int)); 

	printf("남은 학생번호는 :\n"); 
	for (i = 0; i < N - D; i++) {
		printf("%d\n", student_num[i]); 
	}

	return 0; 
}


