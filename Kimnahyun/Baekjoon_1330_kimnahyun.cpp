#include <stdio.h>

int main() {
	int a, b;
	scanf_s("%d %d", &a, &b);
	if (a > b)
		printf(">\n");
	else if (a < b)
		printf("<\n");
	else (a == b);
	printf("==\n");
	return 0;
}