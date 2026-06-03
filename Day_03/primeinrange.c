 #include<stdio.h>

 int main ()
 {
    int low, high;
    printf("Enter range [low high]: ");
    scanf("%d %d", &low, &high);
    printf("Primes between %d and %d: ", low, high);
    for (int n = low; n <= high; n++) {
        if (n <= 1) continue;
        int isPrime = 1;
        for (int i = 2; i * i <= n; i++)
            if (n % i == 0) { isPrime = 0; break; }
        if (isPrime) printf("%d ", n);
    }
    printf("\n");
return 0;
}
 