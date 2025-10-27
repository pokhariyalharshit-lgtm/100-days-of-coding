#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return 1;

    if (n <= 1) {
        printf("Not Perfect Number\n");
        return 0;
    }

    unsigned long long sum = 1ULL; // 1 is always a proper divisor for n>1
    for (long long i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            sum += (unsigned long long)i;
            long long other = n / i;
            if (other != i) sum += (unsigned long long)other;
        }
    }

    if (sum == (unsigned long long)n) printf("Perfect Number\n");
    else printf("Not Perfect Number\n");

    return 0;
}
