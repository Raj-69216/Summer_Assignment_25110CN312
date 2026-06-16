#include <stdio.h>
int main()
{int n,k;
    printf("Size: ");
    scanf("%d",&n);int a[n];
    printf("Elements: ");
    for(int i=0;i<n;i++)scanf("%d",&a[i]);printf("Rotate by: ");
    scanf("%d",&k);k%=n;
    int t[k];for(int i=0;i<k;i++)t[i]=a[i];
    for(int i=0;i<n-k;i++)a[i]=a[i+k];
    for(int i=0;i<k;i++)a[n-k+i]=t[i];
    printf("Left rotated: ");
    for(int i=0;i<n;i++)printf("%d ",a[i]);
    printf("\n");
return 0;
}
