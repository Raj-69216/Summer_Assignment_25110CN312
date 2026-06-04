 #include<stdio.h>
 int main()
 
 {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    long long a = 0, b = 1;
    if (n == 1) { printf("Fibonacci term 1 = 0\n"); return; }
    for (int i = 0; i < n - 1; i++) { long long c = a + b; a = b; b = c; }
    printf("Fibonacci term %d = %lld\n", n, a);
    return 0;
}