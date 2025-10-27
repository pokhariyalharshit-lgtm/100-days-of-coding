#include <stdio.h>
#include <limits.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return 1;

    int negative = n < 0;
    unsigned long long x = negative ? (unsigned long long)(- (unsigned long long)n) : (unsigned long long)n;
    unsigned long long rev = 0ULL;

    while (x > 0ULL) {
        unsigned int digit = (unsigned int)(x % 10ULL);
        if (rev > (ULLONG_MAX - digit) / 10ULL) {
            printf("Overflow\n");
            return 0;
        }
        rev = rev * 10ULL + digit;
        x /= 10ULL;
    }

    if (negative) {
        // For negative, allowed range for rev is up to LLONG_MAX + 1 (to represent LLONG_MIN)
        unsigned long long limit = (unsigned long long)LLONG_MAX + 1ULL;
        if (rev > limit) {
            printf("Overflow\n");
            return 0;
        }
        if (rev == limit) {
            // special-case: -LLONG_MIN
            printf("Reversed number = %lld\n", LLONG_MIN);
        } else {
            long long result = - (long long) rev;
            printf("Reversed number = %lld\n", result);
        }
    } else {
        if (rev > (unsigned long long)LLONG_MAX) {
            printf("Overflow\n");
            return 0;
        }
        printf("Reversed number = %lld\n", (long long)rev);
    }

    return 0;
}
