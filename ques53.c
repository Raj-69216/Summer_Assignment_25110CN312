#include<stdio.h>

int main(){int n,k,f=-1;printf("Size: ");
    scanf("%d",&n);int a[n];printf("Elements: ");
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    printf("Search key: ");
    scanf("%d",&k);
    for(int i=0;i<n;i++)if(a[i]==k){f=i;break;}f!=-1?printf("Found at index %d\n",f):printf("Not found\n");
return 0;}