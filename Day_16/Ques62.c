#include <stdio.h>
void q62(){int n;
    printf("Size: ");
    scanf("%d",&n);int a[n];
    printf("Elements: ");
    for(int i=0;i<n;i++)scanf("%d",&a[i]);int mf=0,me=a[0];
    for(int i=0;i<n;i++){int cnt=0;for(int j=0;j<n;j++)if(a[j]==a[i])cnt++;if(cnt>mf){mf=cnt;me=a[i];}
    }printf("Max frequency element = %d (freq=%d)\n",me,mf);
return 0;
}
