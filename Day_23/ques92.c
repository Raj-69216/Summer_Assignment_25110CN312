#include <stdio.h>
#include <string.h>
int main(){char s[200];
    int freq[256]={0};
    printf("Enter string: ");
    fgets(s,sizeof(s),stdin);
    for(int i=0;s[i]&&s[i]!='\n';
        i++)freq[(unsigned char)s[i]]++;int mx=0;char mc=s[0]
        ;for(int i=0;i<256;i++)if(freq[i]>mx&&i!='\n')
        {mx=freq[i];mc=(char)i;}printf("Max occurring: '%c' (count=%d)\n",mc,mx);
    return 0;
    }
