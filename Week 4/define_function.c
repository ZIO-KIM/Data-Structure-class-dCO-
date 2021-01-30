int findMax(int a, int b) 
{

	if (a > b) {
		return a; 
	}

	else {
		return b; 
	}
}

void print_characters(char c, int n) 
{
	
	int i; 

	for (i = 0; i < n; i++) {
		printf("%c", c); 
	}
}
