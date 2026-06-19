#include <stdio.h>
int main(){int n;printf("Matrix size n x n: ");
    scanf("%d",&n);int a[n][n],md=0,ad=0;printf("Matrix:\n");
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)scanf("%d",&a[i][j]);
    for(int i=0;i<n;i++){md+=a[i][i];ad+=a[i][n-1-i];
    }printf("Main diagonal sum=%d, Anti-diagonal sum=%d\n",md,ad);
return 0;

}
