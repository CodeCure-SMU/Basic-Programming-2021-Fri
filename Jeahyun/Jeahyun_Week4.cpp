// Á¶ÀçÇö 202121063 
#include <stdio.h>
double divide(double dividend, double divisor)
{
	if (divisor == 0){
		printf("Error\n");
		return 0;
	}
   else{
		return dividend / divisor;
   	}
}

int fibo(int n)
{
	int first = 0;
	int second = 1;
	int third;
	for (int i=0;i<n;i++){
		third = first + second;
		first = second;
		second = third;
	}
	return first;
}

int factorial(int n)
{
	int res = 1;
	for (int i=1;i<=n;i++){
		res = res * i;
	}
	return res;
}

int sum(int n)
{
	int res = 0;
	for (int i=1;i<=n;i++){
		res = res + i;
	}
	return res;
}

int sum_range(int num1,int num2)
{
	int res = 0;
	for (num1; num1 <= num2 ; num1++){
		res = res + num1;
	}
	return res;
}

int main()
{
   double num1, num2, result1;
   printf("===== (1) Divide =====\nInput dividend, divisor : ");
   scanf("%lf %lf", &num1, &num2);
   result1 = divide(num1,num2);
   printf("Divide(dividend, divisor) = %f\n",result1);
   printf("\n");
   
   int n1,result2;
   printf("===== (2) Fibonacci =====\nInput n : ");
   scanf("%d",&n1);
   result2 = fibo(n1);
   printf("Fibonacci(n) = %d\n",result2);
   printf("\n");
   
   int n2,result3;
   printf("===== (3) Factorial =====\nInput n : ");
   scanf("%d",&n2);
   result3 = factorial(n2);
   printf("Factorial(n) = %d\n",result3);
   printf("\n");
   
   int n3,result4;
   printf("===== (4) Sum =====\nInput n : ");
   scanf("%d",&n3);
   result4 = sum(n3);
   printf("Sum(n) = %d\n",result4);
   printf("\n");
   
   int num3,num4,result5;
   printf("===== (5) Sum_Range(from,to) =====\nInput from, to : ");
   scanf("%d %d",&num3,&num4);
   result5 = sum_range(num3, num4);
   printf("Sum_Range(from, to) = %d\n",result5);
   printf("\n");
   
   int x1,x2,y1,y2;
   printf("===== (6) Distance(x1,x2,y1,y2) =====\nInput x1,x2,y1,y2 : \n");
   printf("\n");
   
   int a,b,c;
   printf("===== (7) Right Angle Triangle =====\nInput a,b,c : ");
   printf("\n");
   
   return 0;
}


