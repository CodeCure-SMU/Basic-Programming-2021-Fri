#include <stdio.h>
#include <math.h>

double Divide(dividened, divisor);
int Fibonacci(n);
int Factorial(n);
int Sum(n);
int Sum_Range(from, to);
int Distance(x1, x2, y1, y2);
int isRightTriangle(a, b, c);

int main(void)
{
	printf("===== (1) Divide =====\n");
	double dividened, divisor;
	printf("Input dividened, divisor:");
	scanf_s("%lf %lf", &dividened, &divisor);
	printf("Divide(dividend, divisor)=%f\n", Divide(dividened, divisor));

	printf("===== (2) Fibonacci =====");
	int n;
	printf("Input n:");
	scanf_s("%d", &n);
	printf("Fibonacci(n)=%p\n", Fibonacci);

	printf("===== (3) Factorial =====");
	printf("Input n:");
	scanf_s("%d", &n);
	printf("Factorial(n)=%p\n", Factorial);

	printf("===== (4) Sum(n) =====");
	printf("Input n:");
	scanf_s("%d", &n);
	printf("Sum(n) = %d\n", Sum(n));

	printf("===== (5) Sum_Range(from, to) =====");
	int from, to;
	printf("Input from, to:");
	scanf_s("%d %d", &from, &to);
	printf("Sum_Range(from, to)=%d", Sum_Range(from, to));

	printf("===== (6) Distance (x1, x2, y1, y2) =====");
	int x1, x2, y1, y2;
	printf("Distance (x1, x2, y1, y2):");
	scanf_s("%d %d  %d %d", &x1, &x2, &y1, &y2);
	printf(" Distance (x1, x2, y1, y2)=%d\n", Distance(x1, x2, y1, y2));

	printf("===== (7) Right Angle Triangle =====");
	int a, b, c;
	printf("Input a, b, c:");
	scanf_s("%d %d %d", &a, &b, &c);

	return 0;


	//확인할 수 없는 외부 기호가 무엇을 뜻하는 것인지 잘 모르겠습니다//
}