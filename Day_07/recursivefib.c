#include <stdio.h>

long long recFib(int n){if(n<=0)return 0;if(n==1)return 1;return recFib(n-1)+recFib(n-2);}

void q26(){int n;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Fibonacci(%d) recursive = %lld\n",n,recFib(n));}