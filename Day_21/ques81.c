#include <stdio.h>
#include <ctype.h>
int main(){char s[200];printf("Enter string: ");
    fgets(s,sizeof(s),stdin);
    int l=0;while(s[l]!='\0'&&s[l]!='\n')l++;
    printf("Length = %d\n",l);
return 0;
}