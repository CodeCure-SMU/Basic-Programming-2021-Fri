#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int A,B;
	scanf("%d %d", &A,&B);
	printf("%d\n",A + B);
	printf("%d\n",A - B);
	printf("%d\n",A * B);
	printf("%d\n",A / B);
	printf("%d\n",A % B);
	return 0;
}
