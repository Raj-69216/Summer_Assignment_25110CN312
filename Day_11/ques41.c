#include <stdio.h>
int sumTwo(int a,int b){return a+b;}
int main()
{int a,b;
    printf("Enter two numbers: "); 
    scanf("%d %d",&a,&b);
    printf("Sum = %d\n",sumTwo(a,b));
return 0;
}