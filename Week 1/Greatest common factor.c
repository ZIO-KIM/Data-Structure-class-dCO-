#pragma warning(disable: 4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int N, M; 
	int i; 
	int result; 

	scanf("%d %d", &N, &M);

	if (N > M) { 
		for (i = 1; i <= N; i++) {
			if (N % i == 0 && M % i == 0) {
				result = i; 
			}
		}
	}

	else {
		for (i = 1; i <= M; i++) {
			if (N % i == 0 && M % i == 0) {
				result = i;
			}
		}
	}

	printf("%d", result); 
  
  return 0; 
}
