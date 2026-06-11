#include <stdio.h>
int checkPrime(int n){if(n<=1)return 0;for(int i=2;i*i<=n;i++)if(n%i==0)return 0;return 1;}
int main()

{int n;printf("Enter number: ");
    scanf("%d",&n);
    printf("%d is %s prime\n",n,checkPrime(n)?"a":"NOT a");
return 0;
}
