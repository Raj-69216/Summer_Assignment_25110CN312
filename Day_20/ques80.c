#include <stdio.h>
void q80(){int r,c;
    printf("Rows cols: ");scanf("%d %d",&r,&c);int a[r][c];
    printf("Matrix:\n");
    for(int i=0;i<r;i++)for(int j=0;j<c;j++)
    scanf("%d",&a[i][j]);for(int j=0;j<c;j++){int s=0;for(int i=0;i<r;i++)s+=a[i][j];
        printf("Col %d sum = %d\n",j+1,s);}
    return 0;
    }
