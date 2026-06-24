#include <stdio.h>
#include <string.h>
int main(){char s[200];
    int freq[256]={0};printf("Enter string: ");
    fgets(s,sizeof(s),stdin);int l=strlen(s);
    if(s[l-1]=='\n')s[--l]='\0';for(int i=0;
        i<l;i++)freq[(unsigned char)s[i]]++;
        for(int i=0;i<l;i++)if
        (freq[(unsigned char)s[i]]==1)
        {printf("First non-repeating: '%c'\n",s[i]);
            return;}
            printf("None found\n");
            return 0;
        }