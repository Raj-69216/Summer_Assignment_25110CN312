#include <stdio.h>
#include <string.h>

int main(){int n;
    printf("Number of names: ");
    scanf("%d",&n);getchar();
    char names[n][100];for(int i=0;i<n;i++)
    {printf("Name %d: ",i+1);fgets(names[i],100,stdin);
        names[i][strcspn(names[i],"\n")]='\0';
    }char t[100];for(int i=0;i<n-1;i++)for(int j=0;j<n-i-1;j++)if(strcmp(names[j],names[j+1])>0){strcpy(t,names[j]);strcpy(names[j],names[j+1]);strcpy(names[j+1],t);}printf("Alphabetical:\n");
    for(int i=0;i<n;i++)printf("%s\n",names[i]);
return 0;
}
