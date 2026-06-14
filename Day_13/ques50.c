#include<stdio.h>

int main(){
    int n;
    printf("Size: ");
    scanf("%d",&n);int a[n];
    long long s=0;printf("Elements: ");
    for(int i=0;i<n;i++){scanf("%d",&a[i]);s+=a[i];}
    printf("Sum=%lld, Avg=%.2f\n",s,(double)s/n);
return 0;}