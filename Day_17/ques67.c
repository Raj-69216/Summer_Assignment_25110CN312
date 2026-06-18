#include <stdio.h>
int main(){int m,n;printf("Sizes: ");scanf("%d %d",&m,&n);int a[m],b[n];printf("Array1: ");for(int i=0;i<m;i++)scanf("%d",&a[i]);printf("Array2: ");for(int i=0;i<n;i++)scanf("%d",&b[i]);printf("Intersection: ");for(int i=0;i<m;i++)for(int j=0;j<n;j++)if(a[i]==b[j]){printf("%d ",a[i]);break;}printf("\n");
return 0;
 }
