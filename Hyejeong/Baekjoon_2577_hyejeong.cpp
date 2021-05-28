#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()

{
	char str[90];
	int N;
	int i, j;
	int plus;
	int score;

	scanf("%d", &N);

	for (i = 0; i < N; i++)

	{
		scanf("%s", &str);
			plus = 0;

		score = 0;

		for (j = 0; j < strlen(str); j++)
		{
			if (str[j] == 'O')
				plus++;
			else
				plus = 0;
			score += plus;
		}

		printf("%d\n", score);
	}

	return 0;

}