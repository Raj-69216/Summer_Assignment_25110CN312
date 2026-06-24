#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){char s[200];
    int freq[256]={0};printf("Enter string: ");
    fgets(s,sizeof(s),stdin);
    for(int i=0;s[i]&&s[i]!='\n';i++)freq[(unsigned char)s[i]]++;printf("Frequencies:\n");
    for(int i=0;i<256;i++)if(freq[i]>0&&i!='\n')
    printf("'%c': %d\n",i,freq[i]);
return 0;
}
