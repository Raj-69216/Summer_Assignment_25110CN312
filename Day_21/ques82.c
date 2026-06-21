#include <stdio.h>
#include <ctype.h>
int main(){char s[200];
    printf("Enter string: ");
    fgets(s,sizeof(s),stdin);
    int l=strlen(s);if(s[l-1]=='\n')s[--l]='\0';
    for(int i=0,j=l-1;i<j;i++,j--){char t=s[i];s[i]=s[j];s[j]=t;
    }printf("Reversed: %s\n",s);
return 0;
}