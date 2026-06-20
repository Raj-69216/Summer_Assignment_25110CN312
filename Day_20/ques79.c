#include <stdio.h>
void q79(){int r,c;printf("Rows cols: ");
    scanf("%d %d",&r,&c);int a[r][c];
    printf("Matrix:\n");
    for(int i=0;i<r;i++)for(int j=0;j<c;j++)scanf("%d",&a[i][j]);for(int i=0;i<r;i++){int s=0;for(int j=0;j<c;j++)s+=a[i][j];printf("Row %d sum = %d\n",i+1,s);}
return 0;
}
