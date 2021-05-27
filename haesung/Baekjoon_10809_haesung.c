#include <stdio.h>

int main()
{
    char word[100] = { 0 };
    scanf("%s", word, sizeof(word));
    for (int i = 97; i <= 122; i++) 
    {
        int j = 0;
        while (word[j] != 0) 
        {
            if (word[j] == (char)i) break;
            j++;
        }
        if (word[j] == (char)i) printf("%d ", j);
        else printf("-1 ");
    }
    return 0;
}
