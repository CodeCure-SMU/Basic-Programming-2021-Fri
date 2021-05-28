#include <stdio.h>

int main(void)
{ 
   int A = 0, index = 1, i;
    int arr[9];
    for (i=0; i<9; i++) {
        scanf ("%d", &arr[0]);
        if (A<arr[0]){
            A=arr[0];
            index = i +1 ;
        }
    }
    
    printf("%d\n%d", A,index);
        return 0;
}
    
   
