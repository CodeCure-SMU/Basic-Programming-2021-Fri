#include <stdio.h>

int main(void)
{
	int arr[9];
	int count;
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);
	}

	int max = arr[0];
	count = 0;

	for (int i = 0; i < 9; i++)
	{
		if (max < arr[i])
		{
			count = i;
			max = arr[i];
		}
	}
	printf("%d\n%d", max, count+1);
	return 0;
}
