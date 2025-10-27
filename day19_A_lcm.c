#include <stdio.h>
#include <stdlib.h>

unsigned long long ugcd(unsigned long long a, unsigned long long b) {
    while (b != 0ULL) {
        unsigned long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main(void) {
    long long x, y;
    if (scanf("%lld %lld", &x, &y) != 2) return 1;

    if (x == 0 && y == 0) {
        printf("LCM undefined (both numbers are 0)\n");
        return 0;
    }

    unsigned long long a = (x < 0) ? (unsigned long long)(- (unsigned long long)x) : (unsigned long long)x;
    unsigned long long b = (y < 0) ? (unsigned long long)(- (unsigned long long)y) : (unsigned long long)y;

    if (a == 0ULL || b == 0ULL) {
        // If one of them is zero, LCM is 0
        printf("LCM = 0\n");
        return 0;
    }

    unsigned long long g = ugcd(a, b);
    unsigned long long l = (a / g) * b; // compute (a/g)*b to reduce overflow risk
    printf("LCM = %llu\n", l);
    return 0;
}
