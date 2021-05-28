#include <stdio.h>

int main() 
{
     int a, b, c, i;
    int arr[10]= {0};
    
     i = 0;
    while (i < 9) {
	    arr[i] = 0;
	    i++;
    }
    i = 0;
   scanf ("%d %d %d", &a, &b, &c);
    int result = a*b*c;
    
    while (result >0){
        arr[1] = 0;
        i++;
    }
 for (int i = 0; i<10; i++) {
     printf ("%d\n", arr[i]);
 }
    return 0;
}

