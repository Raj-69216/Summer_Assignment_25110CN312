#include <stdio.h>
long long recFact(int n){return n<=1?1:n*recFact(n-1);}

void q25()
{int n;printf("Enter number: ");
    scanf("%d",&n);
    printf("Factorial(%d) recursive = %lld\n",n,recFact(n));}