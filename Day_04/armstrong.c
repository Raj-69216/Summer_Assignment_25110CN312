#include<stdio.h>
int main()

{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int temp = n, digits = 0, sum = 0;
    while (temp) { digits++; temp /= 10; }
    temp = n;
    while (temp) {
        int d = temp % 10, pw = 1;
        for (int i = 0; i < digits; i++) pw *= d;
        sum += pw;
        temp /= 10;
    }
    printf("%d is %san Armstrong number\n", n, (sum == n) ? "" : "NOT ");
    return 0;
}