#include <stdio.h>
int main() {
	int a = 0, num[9], numm;
	for (int i = 0; i < 9; i++) {
		scanf_s("%d", &num[i]);
		if (a < num[i]) 
		{
			a = num[i];
			numm = i;
		}
	}
	printf("%d\n%d", a, numm + 1);
	return 0;
}