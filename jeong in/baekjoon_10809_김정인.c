#include<stdio.h>

int main()
{
	char S[101] = {NULL};
	int count[26] = {0,};
	int i,j;
	scanf("%s",&S);
	for(i='a';i<='z';i++)
	{
		for(j =0;j<100;j++){
			if(S[j] == i)
			{
				count[i-97] = j+1;
				break;
			}
				
		}
	}
	for(i=0;i<26;i++)
	{
		printf("%d ",count[i]-1);
	}
}


