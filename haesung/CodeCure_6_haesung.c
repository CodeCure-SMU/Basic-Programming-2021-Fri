#include <stdio.h>
#include <math.h>

int main()
{
	int x1, x2, y1, y2;
	double distance;

	printf("첫번째 (x, y)의 x값과 y값을 입력: ");
	scanf("%d %d", &x1, &y1);

	printf("두번째 (x, y)의 x값과 y값을 입력: ");
	scanf("%d %d", &x2, &y2);

	distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	printf("두 점의 거리= %f\n", distance);
	return 0;
}