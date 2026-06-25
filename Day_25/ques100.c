#include <stdio.h>
#include <string.h>
int main(){int n;printf("Number of words: ");
    scanf("%d",&n);getchar();char words[n][100];
    for(int i=0;i<n;i++){printf("Word %d: ",i+1);
        fgets(words[i],100,stdin);words[i][strcspn(words[i],"\n")]='\0';}char t[100];
        for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)if(strlen(words[j])>strlen(words[j+1])){strcpy(t,words[j]);
            strcpy(words[j],words[j+1]);strcpy(words[j+1],t);
        }printf("Sorted by length:\n");
            for(int i=0;i<n;i++)printf("%s\n",words[i]);
        return 0;
        }
