#include <stdio.h>
int main() {
	int i;
    int arr[9], MAX = 0, index;
    for (i =0; i <9; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > MAX)
        {
            MAX = arr[i];
            index = i;
        }
    }
    printf("%d\n %d", MAX, index+1);
}
