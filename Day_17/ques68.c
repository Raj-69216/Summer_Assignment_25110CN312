#include <stdio.h>
int main(){int m,n;printf("Sizes: ");scanf("%d %d",&m,&n);int a[m],b[n],c[100],cs=0;printf("Array1: ");for(int i=0;i<m;i++)scanf("%d",&a[i]);printf("Array2: ");for(int i=0;i<n;i++)scanf("%d",&b[i]);for(int i=0;i<m;i++)for(int j=0;j<n;j++)if(a[i]==b[j]){int d=0;for(int k=0;k<cs;k++)if(c[k]==a[i]){d=1;break;}if(!d)c[cs++]=a[i];}printf("Common: ");for(int i=0;i<cs;i++)printf("%d ",c[i]);printf("\n");
return 0;
}
