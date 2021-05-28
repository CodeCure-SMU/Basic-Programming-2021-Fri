#include <stdio.h>

int main()
{
    int arr[9], max = 0, index;
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > max)
        {
            max = arr[i];
            index = i + 1;
        }
    }
    printf("%d\n%d", max, index);
    return 0;
}