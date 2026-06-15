#include<stdio.h>

int main(){int n;
    printf("Size: ");
    scanf("%d",&n);
    int a[n];printf("Elements: ");
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    printf("Duplicates: ");
    for(int i=0;i<n;i++)for(int j=i+1;j<n;j++)if(a[i]==a[j])
    {printf("%d ",a[i]);break;}printf("\n");
return 0;}