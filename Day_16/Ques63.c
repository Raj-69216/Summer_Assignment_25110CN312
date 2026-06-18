#include <stdio.h>
void q63(){int n,t;printf("Size: ");
    scanf("%d",&n);int a[n];printf("Elements: ");
    for(int i=0;i<n;i++)scanf("%d",&a[i]);printf("Target sum: ");
    scanf("%d",&t);
    int f=0;for(int i=0;i<n;i++)for(int j=i+1;j<n;j++)if(a[i]+a[j]==t){printf("Pair: (%d,%d)\n",a[i],a[j]);f=1;}
    
    if(!f)
    printf("No pair found\n");
return 0;
}

