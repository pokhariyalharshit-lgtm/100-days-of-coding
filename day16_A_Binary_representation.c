#include <stdio.h>
#include <limits.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return 1;

    // Handle sign and magnitude safely (avoid overflow for LLONG_MIN)
    unsigned long long mag;
    int negative = 0;
    if (n < 0) {
        negative = 1;
        // compute magnitude as unsigned to avoid overflow when n == LLONG_MIN
        mag = (unsigned long long)(-(n + 1)) + 1ULL;
    } else {
        mag = (unsigned long long)n;
    }

    if (mag == 0ULL) {
        if (negative) printf("-0\n");
        else printf("0\n");
        return 0;
    }

    // collect bits in a buffer (max 64 bits)
    char buf[65];
    int idx = 0;
    while (mag > 0ULL) {
        buf[idx++] = (char)('0' + (mag & 1ULL));
        mag >>= 1ULL;
    }

    if (negative) putchar('-');
    // print bits in reverse
    for (int i = idx - 1; i >= 0; --i) putchar(buf[i]);
    putchar('\n');
    return 0;
}
