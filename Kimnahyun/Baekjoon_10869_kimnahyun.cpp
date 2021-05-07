#include <stdio.h>

int main(void) {
    int a, b;
    scanf_s("%d %d", &a, &b);
    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    printf("%d\n", a / b);
    printf("%d\n", a % b);
    return 0;
}
