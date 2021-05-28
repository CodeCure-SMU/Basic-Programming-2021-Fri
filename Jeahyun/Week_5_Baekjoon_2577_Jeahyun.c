#include <stdio.h>

int main ()
{
    int arr[9];
    int a;
    int b;
    int c;
    int result;
    int tem;
    int cnt = 0;
    int i;
    
    i = 0;
    while (i < 9)
    {
	    arr[i] = 0;
	    i++;
    }
    i = 0;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    result = a*b*c;
    
    while (result > 0)
    {
        tem = result % 10;
        if (tem == 0)
            cnt++;
        else if (tem > 0)
            arr[tem - 1] += 1;
        result /= 10;
    }
    printf("%d\n", cnt);
    while (i <= 8)
    {
	    printf("%d\n", arr[i]);
	    i++;
    }
    
    return (0);
}
