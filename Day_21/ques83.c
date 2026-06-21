#include <stdio.h>
#include <ctype.h>
int main(){char s[200];
    int v=0,con=0;
    printf("Enter string: ");fgets(s,sizeof(s),stdin);
    for(int i=0;s[i]&&s[i]!='\n';i++){char c=tolower(s[i]);if(isalpha(c))
        {if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')v++;else con++;}
    }printf("Vowels=%d, Consonants=%d\n",v,con);
return 0;
}