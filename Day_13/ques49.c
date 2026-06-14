#include<stdio.h>

int main(){
    int n;
    printf("Size: ");
    scanf("%d",&n);int a[n];
    printf("Elements: ");
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    printf("Array: ");
    for(int i=0;i<n;i++)printf("%d ",a[i]);
    printf("\n");
return 0;}