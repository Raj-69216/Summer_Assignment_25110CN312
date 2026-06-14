#include<stdio.h>

int main(){
    int n;printf("Size: ");
    scanf("%d",&n);int a[n];
    printf("Elements: ");
    for(int i=0;i<n;i++)scanf("%d",&a[i]);int mx=a[0],mn=a[0];for(int i=1;i<n;i++){if(a[i]>mx)mx=a[i];
        if(a[i]<mn)mn=a[i];}
        printf("Largest=%d, Smallest=%d\n",mx,mn);
    return 0;}