#include <stdio.h>
void q73(){int r,c;printf("Rows cols: ");
    scanf("%d %d",&r,&c);
    int a[r][c],b[r][c];
    printf("Matrix A:\n");
    for(int i=0;i<r;i++)for(int j=0;j<c;j++)scanf("%d",&a[i][j]);
    printf("Matrix B:\n");
    for(int i=0;i<r;i++)for(int j=0;j<c;j++)scanf("%d",&b[i][j]);
    printf("Sum:\n");
    for(int i=0;i<r;i++){for(int j=0;j<c;j++)printf("%d ",a[i][j]+b[i][j]);
        printf("\n");}
    return 0;
    }
