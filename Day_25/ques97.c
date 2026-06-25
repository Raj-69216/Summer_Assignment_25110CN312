#include <stdio.h>
#include <string.h>
int main(){int m,n;
    printf("Sizes: ");
    scanf("%d %d",&m,&n);
    int a[m],b[n],r[m+n];
    printf("Sorted array1: ");
    for(int i=0;i<m;i++)scanf("%d",&a[i]);printf("Sorted array2: ");
    for(int i=0;i<n;i++)scanf("%d",&b[i]);int i=0,j=0,k=0;
    while(i<m&&j<n)r[k++]=(a[i]<=b[j])?a[i++]:b[j++];
    while(i<m)r[k++]=a[i++];while(j<n)r[k++]=b[j++];printf("Merged sorted: ");
    for(int x=0;x<m+n;x++)printf("%d ",r[x]);printf("\n");
return 0;
}