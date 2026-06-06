
#include <stdio.h>
int main()
 {
    long long bin; printf("Enter binary: "); scanf("%lld",&bin);
    int dec=0,base=1; long long temp=bin;
    while(temp){dec+=(temp%10)*base;base*=2;temp/=10;}
    printf("Decimal = %d\n",dec);
    return 0;
}