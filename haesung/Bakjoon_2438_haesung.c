#include <stdio.h>

int main()
{
	int sf, cnt, star;
	scanf("%d", &sf);
	for (cnt = 1; cnt <= sf; cnt++)
	{
		for (star = 1; star <= cnt; star++)
			printf("*");
		printf("\n");
	}
	
}