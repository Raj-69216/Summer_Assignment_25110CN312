#include <stdio.h>
int main(){int m,n;printf("Sizes: ");scanf("%d %d",&m,&n);int a[m],b[n],u[m+n],us=0;printf("Array1: ");for(int i=0;i<m;i++)scanf("%d",&a[i])
;
printf("Array2: ");
    for(int i=0;i<n;i++)scanf("%d",&b[i]);for(int i=0;i<m;i++){int f=0;for(int k=0;k<us;k++)if(u[k]==a[i]){f=1;break;}if(!f)u[us++]=a[i];}
    for(int i=0;i<n;i++){int f=0;
    for(int k=0;k<us;k++)if(u[k]==b[i]){f=1;break;}
    if(!f)u[us++]=b[i];}printf("Union: ");
    for(int i=0;i<us;i++)printf("%d ",u[i]);
    printf("\n");
return 0;
}
