#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return 1;

    if (n == 0) {
        printf("All integers are factors of 0\n");
        return 0;
    }

    // Work with absolute value to list positive factors
    unsigned long long mag;
    if (n < 0) {
        mag = (unsigned long long)(-(n + 1)) + 1ULL; // handle LLONG_MIN safely
    } else {
        mag = (unsigned long long)n;
    }

    // Dynamic array for larger factor pairs
    size_t cap = 16;
    size_t cnt = 0;
    unsigned long long *pairs = malloc(cap * sizeof(unsigned long long));
    if (!pairs) return 1;

    printf("Factors: ");
    for (unsigned long long i = 1ULL; i <= mag / i; ++i) {
        if (mag % i == 0ULL) {
            unsigned long long j = mag / i;
            printf("%llu ", i);
            if (j != i) {
                if (cnt >= cap) {
                    cap *= 2;
                    unsigned long long *tmp = realloc(pairs, cap * sizeof(unsigned long long));
                    if (!tmp) { free(pairs); return 1; }
                    pairs = tmp;
                }
                pairs[cnt++] = j;
            }
        }
    }

    // Print the paired factors in reverse to get ascending order
    for (long long k = (long long)cnt - 1; k >= 0; --k) {
        printf("%llu ", pairs[k]);
    }
    printf("\n");

    free(pairs);
    return 0;
}
