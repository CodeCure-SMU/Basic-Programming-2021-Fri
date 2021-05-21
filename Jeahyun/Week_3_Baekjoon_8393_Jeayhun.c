#include <stdio.h>
int main(void)
{
	int n;
	int sum = 0;
	scanf("%d",&n);
	if(n>0 && 10001>n){
		for(int i=1;i<=n;i++)
		{
			sum = sum + i;
		}
		printf("%d",sum);
	}
	else{
		return 0;
	}	
	return 0;
}
