#include <stdio.h>
int main(){
    int n;
    printf("Rows: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {for(int s=0;s<n-i-1;s++)
        printf(" ");
        for(int j=0;j<=i;j++)
        printf("%c",'A'+j);
        for(int j=i-1;j>=0;j--)
        printf("%c",'A'+j);
        printf("\n");}
    return 0;
}