#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){char s[200],r[200];
    int j=0;printf("Enter string: ");
    fgets(s,sizeof(s),stdin)
    ;for(int i=0;s[i]&&s[i]!='\n';
        i++)if(s[i]!=' ')r[j++]=s[i];r[j]='\0';
        printf("Without spaces: %s\n",r);
    return 0;
    }
