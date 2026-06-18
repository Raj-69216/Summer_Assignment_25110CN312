#include <stdio.h>
void q64(){int n;
    printf("Size: ");scanf("%d",&n);
    int a[n],r[n],rs=0;printf("Elements: ");
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    for(int i=0;i<n;i++){int d=0;for(int j=0;j<rs;j++)if(r[j]==a[i]){d=1;break;}
    if(!d)r[rs++]=a[i];
    }printf("Without duplicates: ");for(int i=0;i<rs;i++)
    printf("%d ",r[i]);printf("\n");
return 0;
}
