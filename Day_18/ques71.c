#include <stdio.h>
int main(){int n,k;
    printf("Sorted array size: ");scanf("%d",&n);
    int a[n];printf("Elements: ");for(int i=0;i<n;i++)scanf("%d",&a[i]);printf("Search key: ");scanf("%d",&k);int lo=0,hi=n-1,f=-1;while(lo<=hi){int mid=(lo+hi)/2;if(a[mid]==k){f=mid;break;}else if(a[mid]<k)lo=mid+1;else hi=mid-1;}f!=-1?printf("Found at index %d\n",f):printf("Not found\n");
return 0;
}
