#include <stdio.h>
int main(){
    int n; printf("Enter decimal: "); scanf("%d",&n);
    int bin[32],cnt=0,temp=n;
    if(n==0){printf("Binary: 0\n");return;}
    while(temp>0){bin[cnt++]=temp%2;temp/=2;}
    printf("Binary of %d = ",n);
    for(int i=cnt-1;i>=0;i--) printf("%d",bin[i]); printf("\n");
    return 0;
}
