#include <stdio.h>
int main(void)
{
    int h, m;
    scanf("%d %d", &h, &m);
    if((h>=0 && h<=24) && (m>=45) && (m<=59))
    {
        printf("%d %d\n", h, m-45);
    }
    else if((h>0 && h<=24) && (m>=0) && (m<=44))
    {
        printf("%d %d\n", h-1, m+15);
    }
    else if((h==0) && (m<=44))
    {
        printf("23 %d\n", m+15);
    }
    return 0;
}
