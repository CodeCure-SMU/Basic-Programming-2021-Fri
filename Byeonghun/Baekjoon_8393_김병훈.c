#include <stdio.h>

int main()
{
	int s, c = 0;
	scanf("%d", &s);
	for (int i = 1; i <= s; i++)
	{
		c += i;
	}
	printf("%d", c);
}