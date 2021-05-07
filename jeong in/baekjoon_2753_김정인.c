#include <stdio.h>
int main(void)
{
	int A = 0;
	scanf("%d", &A);
	if (A % 4 == 0 && (A % 100 !=0 || A % 400 ==0))
		printf("1");

	else 
		printf("0");

	return 0;
}
