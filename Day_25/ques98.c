#include <stdio.h>
#include <string.h>
int main(){char s1[200],s2[200];
    int f1[256]={0},f2[256]={0};
    printf("String 1: ");
    scanf("%s",s1);printf("String 2: ");
    scanf("%s",s2);for(int i=0;s1[i];i++)f1[(unsigned char)s1[i]]++;
    for(int i=0;s2[i];i++)f2[(unsigned char)s2[i]]++;
    printf("Common chars: ");
    for(int i=0;i<256;i++)if(f1[i]>0&&f2[i]>0)printf("%c ",(char)i);
    printf("\n");
return 0;
}
