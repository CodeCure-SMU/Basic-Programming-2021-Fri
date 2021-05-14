#include <stdio.h>
main (void) 
  {
	int i= 0;
    int n= 0;
    int a= 0;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		a += i;
	}
	printf("%d", a);

	return 0;
}
     
