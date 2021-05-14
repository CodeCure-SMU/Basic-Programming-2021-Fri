#include <stdio.h>
int main(void)
{
	int i, n, b = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		b += i;
	}
	printf("%d", b);

	return 0;
}