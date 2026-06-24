#include <stdio.h>
#include <string.h>
int main()
{char s1[200],s2[200];
    int freq[256]={0};
    printf("String 1: ");fgets(s1,sizeof(s1),stdin);
    printf("String 2: ");fgets(s2,sizeof(s2),stdin);
    for(int i=0;s1[i]&&s1[i]!='\n';i++)freq[(unsigned char)s1[i]]++;
    for(int i=0;s2[i]&&s2[i]!='\n';i++)freq[(unsigned char)s2[i]]--;
    int ok=1;
    for(int i=0;i<256;i++)if(freq[i]){ok=0;break;
    }printf("Strings are %sanagrams\n",ok?"":"NOT ");
return 0;
}
