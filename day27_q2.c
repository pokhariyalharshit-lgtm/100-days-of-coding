#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 1;
    if (n < 2) return 0; // no primes

    char *is_prime = malloc((n + 1) * sizeof(char));
    if (!is_prime) return 1;

    for (int i = 0; i <= n; ++i) is_prime[i] = 1;
    is_prime[0] = is_prime[1] = 0;

    int limit = (int)floor(sqrt((double)n));
    for (int p = 2; p <= limit; ++p) {
        if (is_prime[p]) {
            for (int mult = p * p; mult <= n; mult += p) is_prime[mult] = 0;
        }
    }

    for (int i = 2; i <= n; ++i) {
        if (is_prime[i]) printf("%d\n", i);
    }

    free(is_prime);
    return 0;
}
