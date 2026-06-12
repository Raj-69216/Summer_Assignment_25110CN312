#include <stdio.h>
long long fib(int n)
{long long a=0,b=1;if(n==1)return 0;for(int i=0;i<n-1;i++)
    {long long c=a+b;a=b;b=c;}return a;}
int main(){int n;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Fibonacci(%d) = %lld\n",n,fib(n));
return 0;
}
