#include <stdio.h>
#include <limits.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return 1;

    if (n < 0) {
        printf("Not Strong number\n");
        return 0;
    }

    // factorials of digits 0-9
    unsigned long long fact[10] = {1,1,2,6,24,120,720,5040,40320,362880};

    // handle magnitude safely (LLONG_MIN not possible since n>=0 here)
    unsigned long long mag = (unsigned long long)n;
    unsigned long long sum = 0ULL;

    if (mag == 0ULL) sum = fact[0];

    while (mag > 0ULL) {
        unsigned int d = (unsigned int)(mag % 10ULL);
        sum += fact[d];
        mag /= 10ULL;
    }

    if (sum == (unsigned long long)n) printf("Strong number\n");
    else printf("Not Strong number\n");

    return 0;
}
