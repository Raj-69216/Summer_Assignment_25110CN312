#include <stdio.h>
int findMax(int a,int b){return a>b?a:b;}

int main() 
{int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Maximum = %d\n",
        findMax(a,b));
    return 0;
}

