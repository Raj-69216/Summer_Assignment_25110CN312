#include<stdio.h>

int main(){int n,k,c=0;printf("Size: ");
    scanf("%d",&n);int a[n];printf("Elements: ");
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    printf("Element: ");scanf("%d",&k);
    for(int i=0;i<n;i++)if(a[i]==k)c++;printf("Frequency of %d = %d\n",k,c);
return 0;}