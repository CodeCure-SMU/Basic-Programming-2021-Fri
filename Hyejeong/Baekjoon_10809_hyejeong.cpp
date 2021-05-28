#include <stdio.h>

int main()
{
	char input[101] = "";
	int arr[26] = { 0, };

	scanf("%s", input);

	int i, j;
	for (i = 'a'; i <= 'z'; i++) {
		for (j = 0; j < 100; j++) {
			if (input[j] == i) {
				arr[i - 97] = j + 1;
				break;
			}
		}
	}

	for (i = 0; i < 26; i++) 
	{
		printf("%d ", arr[i] - 1);
	}
	printf("\n");

	return 0;
}

