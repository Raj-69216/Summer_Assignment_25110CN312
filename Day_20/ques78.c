#include <stdio.h>
void q78(){int n;printf("Matrix size: ");
    scanf("%d",&n);int a[n][n],sym=1;
    printf("Matrix:\n");
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)scanf("%d",&a[i][j]);
    for(int i=0;i<n&&sym;i++)for(int j=0;j<n&&sym;j++)if(a[i][j]!=a[j][i])sym=0;
    printf("Matrix is %ssymmetric\n",sym?"":"NOT ");
return 0;
}
