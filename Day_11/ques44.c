#include <stdio.h>
long long findFactorial(int n){long long f=1;for(int i=2;i<=n;i++)f*=i;return f;}
int main()
{int n;printf("Enter number: ");
    scanf("%d",&n);
    printf("Factorial(%d) = %lld\n",n,
        findFactorial(n));
    return 0;
}
