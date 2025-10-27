#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return 1;

    if (n < 0) {
        printf("Not Armstrong number\n");
        return 0;
    }

    long long original = n;
    long long temp = n;
    int digits = 0;

    // Count digits (handle 0 correctly)
    do {
        digits++;
        temp /= 10;
    } while (temp != 0);

    temp = n;
    unsigned long long sum = 0ULL;

    while (temp != 0) {
        int d = (int)(temp % 10);
        // compute d^digits without using pow() to avoid floating point
        unsigned long long p = 1ULL;
        for (int i = 0; i < digits; ++i) p *= (unsigned long long)d;
        sum += p;
        temp /= 10;
    }

    // For n==0, loop above is skipped; handle sum correctly (0^1 = 0)
    if (original == 0) sum = 0ULL;

    if (sum == (unsigned long long)original) {
        printf("Armstrong number\n");
    } else {
        printf("Not Armstrong number\n");
    }

    return 0;
}
