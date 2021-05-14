  
#include <stdio.h>

int main(void)
{
	int A = 0; int B = 0;
    
	while (true)
	{
		scanf("%d %d", &A , &B);
		if(A==0 && B==0) 
            return 0;
        
		else{
			printf("%d\n" , A + B);
		}
	}
	return 0;
}
