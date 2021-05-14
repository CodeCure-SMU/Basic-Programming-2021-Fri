#include <stdio.h>

int main(void)
{
	int A = 0, B = 0;
	scanf("%d %d", &A, &B);
	while (A)
	{
		printf("%d\n", A + B);
		scanf("%d %d", &A, &B);

	}


	return 0;
}
