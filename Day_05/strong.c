#include <stdio.h>
 
int main() {
    int n; printf("Enter number: "); scanf("%d", &n);
    int temp = n, sum = 0;
    while (temp) {
        int d = temp % 10, fact = 1;
        for (int i = 1; i <= d; i++) fact *= i;
        sum += fact; temp /= 10;
    }
    printf("%d is %sa strong number\n", n, (sum == n) ? "" : "NOT ");
    return 0;
    
}