#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Divide(double dividend, double divisor);
int Fibonacci(int n);
int Factorial(int n);
int Sum(int n);
int Sum_Range(int from, int to);
int Distance(int x1, int x2, int y1, int y2);
int isRightTriangle(int a, int b, int c);

int main(void)
{

	printf("===== (1) Divide =====\n");
	double dividend, divisor;
	printf("Input dividened, divisor: ");
	scanf_s("%lf %lf", &dividend, &divisor);
	printf("Divide(dividend, divisor) = %f\n", Divide(dividend, divisor));
    

	printf("===== (2) Fibonacci =====");
	int n;
	printf("Input n: ");
	scanf_s("%d", &n);
	printf("Fibonacci(n) = %d\n", Fibonacci);

	printf("===== (3) Factorial =====");
	printf("Input n: ");
	scanf_s("%d", &n);
	printf("Factorial(n) = %d\n", Factorial);

	printf("===== (4) Sum(n) =====");
	printf("Input n: ");
	scanf_s("%d", &n);
	printf("Sum(n) = %d\n", Sum(n));

	printf("===== (5) Sum_Range(from, to) =====");
	int from, to;
	printf("Input from, to: ");
	scanf_s("%d %d", &from, &to);
	printf("Sum_Range(from, to) = %d", Sum_Range(from, to));

	printf("===== (6) Distance (x1, x2, y1, y2) =====");
	int x1, x2, y1, y2;
	printf("Distance (x1, x2, y1, y2): ");
	scanf_s("%d %d  %d %d", &x1, &x2, &y1, &y2);
	printf(" Distance (x1, x2, y1, y2) = %d\n", Distance(x1, x2, y1, y2));

	/*printf("===== (7) Right Angle Triangle ===== ");
	int a;
	int b;
	int c;
	printf("Input a, b, c: ");
	scanf_s("%d %d %d", &a, &b, &c);*/
	
	return 0;
}
