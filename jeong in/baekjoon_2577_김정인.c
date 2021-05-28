#include <stdio.h>

int main()
{
    int a, b, c;
    int i;
    int arr[10] = { 0, }; // 배열의 요소를 모두 0으로 초기화 
    scanf("%d %d %d", &a, &b, &c);
    int n = a * b * c;
    int rest;

    while (n > 0)
    {
        rest = n % 10;
        arr[rest]++;
        n /= 10;
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
