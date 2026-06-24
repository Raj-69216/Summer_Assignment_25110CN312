#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){char s[500];int w=0,in=0;
    printf("Enter sentence: ");
    fgets(s,sizeof(s),stdin);
    for(int i=0;s[i]&&s[i]!='\n';i++){if(s[i]!=' ')
        {if(!in){w++;in=1;}}else in=0;
    }printf("Word count = %d\n",w);
return 0;
}
