 #include <stdio.h>
 char s[102]; 
 int p[27] ;
int i;
   int main(){ 
    scanf("%s",s);
    for(int i = 0; s[i] i++) {
        if (p[s[i]-'a'] ==0) {
            p[s[i]-'a'] = i+1;
        }
    }
    for(int i = 0; i<26;i++){
        printf ("%d",p[i]-1);
    }
}
