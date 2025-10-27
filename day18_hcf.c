#include <stdio.h>
#include <stdlib.h>

long long gcd(long long a, long long b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    if (a == 0) return b;
    if (b == 0) return a;
    while (b != 0) {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main(void) {
    long long x, y;
    if (scanf("%lld %lld", &x, &y) != 2) return 1;

    if (x == 0 && y == 0) {
        printf("HCF undefined (both numbers are 0)\n");
        return 0;
    }

    long long h = gcd(x, y);
    printf("HCF = %lld\n", h);
    return 0;
}
