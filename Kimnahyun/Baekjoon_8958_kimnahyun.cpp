#include <stdio.h>
#include <string.h>

int main() {
	int n;
	int jum, sum;
	char str[80];
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		sum = 0;
		jum = 0;
		scanf_s("%s", str, 80);
		for (int j = 0; j < strlen(str); j++) {
			if (str[j] == 'O') {
				jum++;
				sum = sum+jum;
			}
			if (str[j] == 'X') {
				score = 0;
			}
		}
		printf("%d\n", sum);
		return 0;
	}