// Baekjoon_2884_Taejin.c
#include <stdio.h>

int main(void) {
	int hour, minute;

	scanf("%d %d", &hour, &minute);

	minute -= 45;
	if (minute < 0) {
		hour = hour - 1;
		minute = 60 + minute;
	}

	if (hour < 0)
		hour = 24 + hour;

	printf("%d %d\n", hour, minute);

	return 0;
}