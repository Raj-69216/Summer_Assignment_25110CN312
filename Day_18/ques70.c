#include <stdio.h>
int main(){int n;printf("Size: ");
    scanf("%d",&n);int a[n];
    printf("Elements: ");for(int i=0;i<n;i++)scanf("%d",&a[i]);
    for(int i=0;i<n-1;i++){int mi=i;
        for(int j=i+1;j<n;j++)if(a[j]<a[mi])mi=j;int t=a[i];a[i]=a[mi];a[mi]=t;}printf("Selection sorted: ");
        for(int i=0;i<n;i++)printf("%d ",a[i]);
        printf("\n");
    return 0;
    }
