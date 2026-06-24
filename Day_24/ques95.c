#include <stdio.h>
#include <string.h>
int main(){char s[500],longest[200]="",cur[200]="";
    int j=0;printf("Enter sentence: ");
    fgets(s,sizeof(s),stdin);
    for(int i=0;s[i];i++){if(s[i]!=' '&&s[i]!='\n')cur[j++]=s[i];else{cur[j]='\0';
        if(strlen(cur)>strlen(longest))strcpy(longest,cur);j=0;}
    }printf("Longest word: %s\n",longest);
return 0;
}
