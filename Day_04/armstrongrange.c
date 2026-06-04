#include<stdio.h>
int main()

{
    int low, high;
    printf("Enter range [low high]: ");
    scanf("%d %d", &low, &high);
    printf("Armstrong numbers between %d and %d: ", low, high);
    for (int n = low; n <= high; n++) {
        int temp = n, digits = 0, sum = 0;
        while (temp) { digits++; temp /= 10; }
        temp = n;
        while (temp) {
            int d = temp % 10, pw = 1;
            for (int i = 0; i < digits; i++) pw *= d;
            sum += pw; temp /= 10;
        }
        if (sum == n) printf("%d ", n);
    }
    printf("\n");
    return 0;
}