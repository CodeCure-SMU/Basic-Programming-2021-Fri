#include <stdio.h>

int main() {
    int a, b, c;
    int num[10] = { 0 };
    scanf("%d %d %d", &a, &b, &c);
    int res = a * b * c;

    while (res > 0) {
        num[res % 10]++;
        res = res/10;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", num[i]);
    }
    return 0;
}