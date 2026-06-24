#include <stdio.h>
#include <string.h>
int main (){char s1[200],s2[200];
    printf("String 1: ");fgets(s1,sizeof(s1),stdin);
    printf("String 2: ");fgets(s2,sizeof(s2),stdin);
    s1[strcspn(s1,"\n")]='\0';s2[strcspn(s2,"\n")]='\0';if(strlen(s1)!=strlen(s2)){printf("Not a rotation\n");
        return;}char d[400];strcpy(d,s1);
        strcat(d,s1);printf("\"%s\" is %sa rotation of \"%s\"\n",s2,strstr(d,s2)?"":"NOT ",s1);
    return 0;
    }
