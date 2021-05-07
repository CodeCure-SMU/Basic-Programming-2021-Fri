// Baekjoon_2753_Taejin.c
#include <stdio.h>

int main(void) {
	int num1;
	int year = 0;
	
	scanf("%d", &num1);
	
	if (num1 % 400 == 0)
		year = 1;
	else if (num1 % 100 == 0)
		year = 0;
	else if (num1 % 4 == 0)
		year = 1;
	else
		year = 0;
	
	printf("%d\n", year);
	
	return 0;
}
