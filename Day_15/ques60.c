#include <stdio.h>
int main(){
    int n;printf("Size: ");
    scanf("%d",&n);int a[n];
    printf("Elements: ");
    for(int i=0;i<n;i++)scanf("%d",&a[i]);int p=0;for(int i=0;i<n;i++)if(a[i]!=0)a[p++]=a[i];
    while(p<n)a[p++]=0;printf("After moving zeros: ");
    for(int i=0;i<n;i++)printf("%d ",a[i]);printf("\n");
return 0;
}
