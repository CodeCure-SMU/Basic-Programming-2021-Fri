#include <stdio.h>

int main(void)
{
	int A = 0, B = 0;
	scanf_s("%d %d", &A, &B);
	while (A)
	{
		printf("%d\n", A + B);
		scanf_s("%d %d", &A, &B);

	}


	return 0;
}
