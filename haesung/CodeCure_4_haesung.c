#include <stdio.h>

int sum(int n)
{
	if (n <= 0)
		return 0;
	return n + sum(n - 1);
}

int main()
{
	int num;

	printf("숫자입력: ");
	scanf("%d", &num);

	printf("%d까지의 합: %d\n", num, sum(num));
	return 0;
}