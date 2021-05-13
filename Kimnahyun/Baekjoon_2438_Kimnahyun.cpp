#include <stdio.h>
int main(void)
{
    int N, i, j;
    scanf_s("%d", &N);
    for (i = 1; i <= N; i++) {
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}