#include <stdio.h>

int main()

{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int x = a, y = b;
    while (y != 0) { int t = y; y = x % y; x = t; }
    printf("GCD(%d, %d) = %d\n", a, b, x);
    return 0;
    
}