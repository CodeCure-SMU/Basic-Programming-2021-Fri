#include <stdio.h>

int main(void)
{
	int i, n, a = 0;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		a += i;
	}
	printf("%d", a);

	return 0;
}