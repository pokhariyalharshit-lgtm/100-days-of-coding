#include <stdio.h>
#include <limits.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 1;

    if (n < 0) {
        printf("Factorial not defined for negative numbers\n");
        return 0;
    }

    unsigned long long fact = 1ULL;
    for (int i = 2; i <= n; ++i) {
        if (fact > ULLONG_MAX / (unsigned long long)i) {
            printf("Overflow\n");
            return 0;
        }
        fact *= (unsigned long long)i;
    }

    printf("Factorial=%llu\n", fact);
    return 0;
}
