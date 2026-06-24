#include <stdio.h>
#include <string.h>
int main(){char s[200],r[200];
    int seen[256]={0},k=0;
    printf("Enter string: ");fgets(s,sizeof(s),stdin);
    for(int i=0;s[i]&&s[i]!='\n';i++)if(!seen[(unsigned char)s[i]]){seen[(unsigned char)s[i]]=1;
        r[k++]=s[i];}r[k]='\0';
        printf("Without duplicates: %s\n",r);
    return 0;
    }
