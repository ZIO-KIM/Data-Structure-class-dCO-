#pragma warning(disable: 4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {

  char str[21]; 
  int i; 

  scanf("%s", str); 

  for (i=0; i < strlen(str); i++)
  {
    if (str[i] >= 'a' && str[i] <= 'z')
    {
      printf("%c", str[i]); 
    }
  }

	return 0; 
}


