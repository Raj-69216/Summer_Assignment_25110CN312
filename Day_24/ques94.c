#include <stdio.h>
#include <string.h>
int main(){char s[200];
    printf("Enter string: ");fgets(s,sizeof(s),stdin);
    int l=strlen(s);if(s[l-1]=='\n')s[--l]='\0';
    printf("Compressed: ");
    for(int i=0;i<l;){int cnt=1;while(i+cnt<l&&s[i+cnt]==s[i])cnt++;
        if(cnt>1)printf("%c%d",s[i],cnt);
        else printf("%c",s[i]);i+=cnt;
    }printf("\n");
return 0;
}
