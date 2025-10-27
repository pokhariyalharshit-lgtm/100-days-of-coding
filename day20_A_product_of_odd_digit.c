#include <stdio.h>
#include <limits.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return 1;

    // Handle negative safely (avoid overflow for LLONG_MIN)
    unsigned long long mag = (n < 0) ? (unsigned long long)(-(n + 1)) + 1ULL : (unsigned long long)n;

    unsigned long long prod = 1ULL;
    int found = 0;

    while (mag > 0ULL) {
        unsigned int d = (unsigned int)(mag % 10ULL);
        if (d % 2 == 1) {
            found = 1;
            if (prod > ULLONG_MAX / d) {
                printf("Overflow\n");
                return 0;
            }
            prod *= d;
        }
        mag /= 10ULL;
    }

    if (!found) {
        printf("Product=0\n");
    } else {
        printf("Product=%llu\n", prod);
    }
    return 0;
}
