#include <stdio.h>

int main(void)
{
    int A = 0;
    int B = 0;

    scanf("%d %d", &A, &B);

    printf("%d\n", A + B);
    printf("%d\n", A - B);
    printf("%d\n", A * B);
    printf("%d\n", A / B);
    printf("%d\n", A % B);

    return 0;
}