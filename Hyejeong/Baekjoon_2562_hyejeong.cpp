#include <stdio.h>

int main() 
{
    int max = 0, index = 1, i;

    int arr[9];

    for (i = 0; i < 9; i++) 
    {
        scanf("%d", &arr[0]);

        if (max < arr[0]) 
        {

            max = arr[0];

            index = i + 1;

        }

    }
    printf("%d\n%d", max, index);

    return 0;

}
