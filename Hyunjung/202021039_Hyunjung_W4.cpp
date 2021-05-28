#include <iostream>
#include <math.h>
using namespace std;

int Divide(double x, double y) {
	double ans = x / y; //% 사용시 에러뜸

	if (y == 0) {
		cout << "Error"<<endl;
		return ans;
	}
	return ans;
}

int Fibonacci(int x) {
	if (x == 0)
		return 0;
	else if (x == 1)
		return 1;
	else
		return (Fibonacci(x - 1) + Fibonacci(x - 2));
}

int Factorial(int x) {
	if (x == 0 || x == 1)
		return 1;
	else
		return (x * Factorial(x - 1));
}

int Sum(int x) {
	int sum = 0;
	for (int i = 1; i <= x; i++) {
		sum = sum + i;
	}
	return sum;
}

int Sum_Range(int x, int y) {
	int sum = 0;
	for (int i = x; i <= y; i++) {
		sum = sum + i;
	}
	return sum;
}

int Distance(double x1, double x2, double y1, double y2) {
	double dis = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	return dis;
}

int isRightAngleTriangle(int x, int y, int z) {
	if (x* x + y * y == z * z || x * x + z * z == y * y || y * y + z * z == x * x)
		return 1;
	else
		return 0;
}

int main() {
	double end, sor;
	double n1, n2, n3, n4;
	int x, y, z, k;
	cout << "===== (1) Divide =====" << endl;
	cout << "Input dividend, divisor: ";
	cin >> end >> sor;
	cout << "Divide(dividend, divisor) = " << Divide(end, sor)<<endl;

	cout << "===== (2) Fibonacci =====" << endl;
	cout << "Input n: ";
	cin >> x;
	cout << "Fibonacci(n) = " << Fibonacci(x) << endl;

	cout << "===== (3) Factorial =====" << endl;
	cout << "Input n: ";
	cin >> x;
	cout << "Factorial(n) = " << Factorial(x) << endl;

	cout << "===== (4) Sum(n) =====" << endl;
	cout << "Input n: ";
	cin >> x;
	cout << "Sum(n) = " << Sum(x) << endl;

	cout << "===== (5) Sum_Range(from, to) =====" << endl;
	cout << "Input from, to: ";
	cin >> x>>y;
	cout << "Sum_Range(from, to) = " << Sum_Range(x, y) << endl;

	cout << "===== (6) Distance(x1, x2, y1, y2) =====" << endl;
	cout << "Input x1, x2, y1, y2: ";
	cin >> n1>>n2>>n3>>n4;
	cout << "Distance(x1, x2, y1, y2) = " << Distance(n1, n2, n3, n4) << endl;

	cout << "===== (7) Right Angle Triangle =====" << endl;
	cout << "Input a,b,c: ";
	cin >> x>>y>>z;
	if (isRightAngleTriangle(x, y, z) == 1)
		cout << "is Right Angle Triangle";
	else
		cout << "is not Right Angle Triangle";

	return 0;

}