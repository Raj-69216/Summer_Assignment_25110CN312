#include <stdio.h>
int main()

{
    int n,count=0; printf("Enter number: "); scanf("%d",&n);
    int temp=n; while(temp){count+=temp&1;temp>>=1;}
    printf("Set bits in %d = %d\n",n,count);
    return 0;
}
