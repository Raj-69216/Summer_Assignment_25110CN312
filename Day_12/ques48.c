#include <stdio.h>
int isPerfect(int n){int s=0;for(int i=1;i<n;i++)if(n%i==0)s+=i;return s==n;}
int main()
{int n;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("%d is %sa perfect number\n",n,isPerfect(n)?"":"NOT ");
return 0;
}
