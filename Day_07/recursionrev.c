#include <stdio.h>
int recRev(int n,int rev)
{return n==0?rev:recRev(n/10,rev*10+n%10);}
void q28()
{int n;
    printf("Enter number: ");scanf("%d",&n);
    printf("Reverse recursive = %d\n",recRev(n,0));}