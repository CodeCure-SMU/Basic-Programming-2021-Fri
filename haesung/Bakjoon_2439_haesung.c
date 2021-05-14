#include <stdio.h>

int main()
{
	int k = 0, g = 0, h =0;
	scanf("%d", &k);
	for (g = 1; g <= k; g++)
	{
		for (h = 1; h <= k; h++)
		{
			if (h <= k - g)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
}