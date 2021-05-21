#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

double Divide(double dividend, double divisor);
int Fibonacci(int n);
int Factorial(int n);
int Sum(int n);
int Sum_Range(int from, int to);
double Distance(int x1, int x2, int y1, int y2);
int isRightTriangle(int a, int b, int c);


int main() {
	printf("===== (1) Divide =====\n");
	double dividend, divisor;
	printf("Input dividend, divisor: "); 
	scanf("%lf %lf", &dividend, &divisor);
	printf("Divide(dividend, divisor) = %f\n", Divide(dividend, divisor));
	
	printf("===== (2) Fibonacci =====\n");
	int n;
	printf("Input n: "); 
	scanf("%d", &n);
	printf("Fibonacci(n) = %d\n", Fibonacci(n));
	
	printf("===== (3) Factorial =====\n");
	printf("Input n : ");
	scanf("%d", &n);
	printf("Factorial(n) = %d\n", Factorial(n));
	
	printf("===== (4) Sum(n) =====\n");
	printf("Input n : ");
	scanf("%d", &n);
	printf("sum(n) = %d\n", Sum(n));
	
	printf("===== (5) Sum_Range(from, to) =====\n");
	int from, to;
	printf("Input form, to: ");
	scanf("%d %d", &from, &to);
	printf("Sum_Range(from, to) = %d\n", Sum_Range(from, to));
	
	printf("===== (6) Distance(x1, x2, y1, y2) =====\n");
	int x1, x2, y1, y2;
	printf("Input x1, x2, y1, y2 : ");
	scanf("%d %d %d %d", &x1,&x2,&y1,&y2);
	printf("Distance(x1,x2,y1,y2) = %d\n", Distance(x1, x2, y1, y2));
	
	printf("===== (7) Right Angle Triangle =====\n");
	int a,b,c;
	printf("Input a,b,c : ");
	scanf("%d %d %d", &a, &b, &c);
	printf("%d %d %d is ", a,b,c);
	if(isRightTriangle(a,b,c))
		printf("Right Angle Triangle\n");
	else
		printf("Not Right Angle Triangle\n");
		
	
	
	return 0;
}

double Divide(double dividend, double divisor)
{
	
	return dividend / divisor;
	if(divisor == 0)
	return 0.0;
}

int Fibonacci(int n)
{
	if(n==0)
		return 0;
	else if (n ==1)
		return 1;
	else
	{
		return Fibonacci(n-1) + Fibonacci(n-2);
	}
}

int Factorial(int n)
{
	if (n == 1)      
		return 1;    
	else
	return n * Factorial(n - 1);
}

int Sum(int n)
{
	int result = 0, i;
	for(i =1; i<n+1; i++)
	{
		result += i;
	}
	return result;
}


int Sum_Range(int from, int to)
{
	int result = 0, i;
	for (i= from; i<=to; i++)
	{
		result += i;
	}
	return result;
}

double Distance(int x1, int x2, int y1, int y2)
{
	return sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));	
}

int isRightTriangle(int a, int b, int c)
{
	if(pow(a, 2)+ pow(b, 2) == pow(c, 2))
	return 1;
	else if(pow(b, 2) + pow(c, 2) == pow(a, 2))
	return 1;
	else if(pow(a,2)+ pow(c, 2) == pow(b, 2))
	return 1;
	
}

// 올바르게 잘 작성했는지는 잘 모르겠습니다만 열심히 해보았습니다...


