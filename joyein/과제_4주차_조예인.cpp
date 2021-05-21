
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Divide( dividend, divisor);
int Fibonacci(n);
int Factorial(n);
int Sum(n);
int Sum_Range(from,  to);
int Distance(x1,  x2,  y1, y2);
int isRightTriangle( a, b, c);

int main(void)
{

	printf("==== (1) Divide ====\n");
	double dividend, divisor;
	printf("Input dividened, divisor: ");
	scanf_s("%lf %lf", &dividend, &divisor);
	printf("Divide(dividend, divisor) = %f\n", Divide(dividend, divisor));

	printf("==== (2) Fibonacci ====\n");
	int n;
	printf("Input n: ");
	scanf_s("%d", &n);
	printf("Fibonacci(n) = %d\n", Fibonacci);

	printf("==== (3) Factorial ====\n");
	printf("Input n: ");
	scanf_s("%d", &n);
	printf("Factorial(n) = %d\n", Factorial);

	printf("==== (4) Sum(n) ====\n");
	printf("Input n: ");
	scanf_s("%d", &n);
	printf("Sum(n) = %d\n", Sum(n));

	printf("==== (5) Sum_Range(from, to) ====\n");
	int from, to;
	printf("Input from, to: ");
	scanf_s("%d %d", &from, &to);
	printf("Sum_Range(from, to) = %d", Sum_Range(from, to));

	return 0;
}