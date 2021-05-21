#include <stdio.h>

int factorial(int n)
{
	if (n == 1)      
		return 1;    
	else
	return n * factorial(n - 1);
}

int main()
{
	int n, i, result = 1;

	printf("정수입력: ");
	scanf("%d",  &n);

	result = factorial(n);

	printf("%d! = %d\n", n, result);
	return 0;
}