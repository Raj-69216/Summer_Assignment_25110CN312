#include <stdio.h>
int isArm(int n){int t=n,d=0,s=0;while(t){d++;t/=10;}t=n;while(t)
{int x=t%10,p=1;for(int i=0;i<d;i++)p*=x;s+=p;t/=10;}return s==n;}
int main()
{int n;printf("Enter number: ");
    scanf("%d",&n);
    printf("%d is %san Armstrong number\n",n,isArm(n)?"":"NOT ");
return 0;
}
