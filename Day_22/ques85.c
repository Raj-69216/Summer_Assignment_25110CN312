#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{char s[200];printf("Enter string: ");
    fgets(s,sizeof(s),stdin);
    int l=strlen(s);if(s[l-1]=='\n')s[--l]='\0';
    int p=1;for(int i=0,j=l-1;i<j;i++,j--)
    if(tolower(s[i])!=tolower(s[j])){p=0;break;
    }printf("\"%s\" is %sa palindrome\n",s,p?"":"NOT ");
return 0;
}