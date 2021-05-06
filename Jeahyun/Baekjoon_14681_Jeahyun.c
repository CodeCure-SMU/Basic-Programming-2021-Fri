#include <stdio.h>
int main(void)
{
	int x;
	int y;
	scanf("%d",&x);
	scanf("%d",&y);
	if (x>0 && y>0)
	{
		printf("1");
	}
	else if (x<0 && y>0)
	{
		printf("2");
	}
	else if (x<0 && y<0)
	{
		printf("3");
	}
	else if (x>0 && y<0)
	{
		printf("4");
	}
	return 0;
}
