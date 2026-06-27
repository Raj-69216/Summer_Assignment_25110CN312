#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){int arr[100],n=0,ch,v;do{printf("\n1.Input 2.Display 3.Sum 4.Max 5.Min 6.Sort 7.Search 8.Exit\nChoice: ");scanf("%d",&ch);if(ch==1){printf("Size: ");scanf("%d",&n);printf("Elements: ");for(int i=0;i<n;i++)scanf("%d",&arr[i]);}else if(ch==2){for(int i=0;i<n;i++)printf("%d ",arr[i]);printf("\n");}else if(ch==3){int s=0;for(int i=0;i<n;i++)s+=arr[i];printf("Sum=%d\n",s);}else if(ch==4){int mx=arr[0];for(int i=1;i<n;i++)if(arr[i]>mx)mx=arr[i];printf("Max=%d\n",mx);}else if(ch==5){int mn=arr[0];for(int i=1;i<n;i++)if(arr[i]<mn)mn=arr[i];printf("Min=%d\n",mn);}else if(ch==6){for(int i=0;i<n-1;i++)for(int j=0;j<n-i-1;j++)if(arr[j]>arr[j+1]){int t=arr[j];arr[j]=arr[j+1];arr[j+1]=t;}printf("Sorted!\n");}else if(ch==7){printf("Search: ");scanf("%d",&v);int f=-1;for(int i=0;i<n;i++)if(arr[i]==v){f=i;break;}f!=-1?printf("Found at %d\n",f):printf("Not found\n");}}while(ch!=8);
return 0;
}
