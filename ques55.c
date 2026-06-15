#include<stdio.h>

int main(){int n;
    printf("Size: ");
    scanf("%d",&n);
    int a[n];printf("Elements: ");
    for(int i=0;i<n;i++)scanf("%d",&a[i]);int f=-2e9,s=-2e9;
    for(int i=0;i<n;i++){if(a[i]>f){s=f;f=a[i];}
    else if(a[i]>s&&a[i]!=f)s=a[i];}
    printf("Second largest = %d\n",s);
return 0;}