#include <stdio.h>
int main(void)
{
	int A = 0, B = 0;
	scanf("%d %d", &A, &B);
	if (A > B) 
		printf(">");

	else if (A < B) 
		printf("<");
	
	else if (A == B)
		printf("==");

	return 0;
}