#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int i;

    int arr[10] = { 0, };
    scanf("%d %d %d", &a, &b, &c);
    int rest;
    int num = a * b * c;
    
    while (num > 0)
    {
        rest = num % 10;
        arr[rest]++;
        n /= 10;
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}