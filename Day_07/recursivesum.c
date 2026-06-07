#include <stdio.h>
int recSum(int n){return n==0?0:n%10+recSum(n/10);}
void q27(){int n;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Sum of digits recursive = %d\n",recSum(n));}