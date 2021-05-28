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

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	int arr[26], i, j;
	char S[100] ={ 0 };
	
	scanf("%s", S);
	
	for(i=0; i<26; i++)
		arr[i]=-1;
		
	for(i='a'; i<='z'; i++)
	{
		for(j=0; j<strlen(S); j++)
		{
			if(i==S[j])
			{
				arr[S[j]-'a'] = j;
				break;
			}
		}
	}
	
	for(i=0; i<26; i++)
	{
		printf("%d", arr[i]);
		if(i<25)
			printf(" ");
	}
	return 0;
}
*/

