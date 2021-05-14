#include <stdio.h>

int main()
{
	int count, a, star;
	scanf("%d", &count);
	for (a = 1; a <= count; a++)
	{
		for (star = 1; star <= a; star++)
			printf("*");
		printf("\n");
	}
	
}
