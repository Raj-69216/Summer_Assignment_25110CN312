#include <stdio.h>
#include <ctype.h>
int main(){char s[200];
    printf("Enter string: ");
    fgets(s,sizeof(s),stdin);
    printf("Uppercase: ");
    for(int i=0;s[i]&&s[i]!='\n';i++)printf("%c",toupper(s[i]));
    printf("\n");
return 0;
}