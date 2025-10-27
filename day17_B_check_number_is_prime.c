#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return 1;

    if (n <= 1) {
        printf("Not Prime\n");
        return 0;
    }
    if (n <= 3) {
        printf("Prime\n");
        return 0;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        printf("Not Prime\n");
        return 0;
    }

    long long i = 5;
    while (i <= n / i) { // avoid i*i overflow
        if (n % i == 0 || n % (i + 2) == 0) {
            printf("Not Prime\n");
            return 0;
        }
        i += 6;
    }

    printf("Prime\n");
    return 0;
}
