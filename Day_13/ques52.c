#include<stdio.h>

int main(){int n,e=0,o=0;printf("Size: ");
    scanf("%d",&n);int a[n];
    printf("Elements: ");
    for(int i=0;i<n;i++){scanf("%d",&a[i]);if(a[i]%2==0)e++;else o++;}
    printf("Even=%d, Odd=%d\n",e,o);
return 0;
}