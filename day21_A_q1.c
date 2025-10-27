#include <stdio.h>
#include <limits.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return 1;

    int negative = n < 0;
    unsigned long long mag = negative ? (unsigned long long)(-(n + 1)) + 1ULL : (unsigned long long)n;

    if (mag < 10ULL) {
        // Single digit, no change
        if (negative) printf("Result = -%llu\n", mag);
        else printf("Result = %llu\n", mag);
        return 0;
    }

    // find highest power of 10 <= mag
    unsigned long long pow10 = 1ULL;
    while (mag / pow10 >= 10ULL) {
        pow10 *= 10ULL;
    }

    unsigned long long first = mag / pow10;
    unsigned long long last = mag % 10ULL;

    // If first and last are same, number remains same
    if (first == last) {
        if (negative) printf("Result = -%llu\n", mag);
        else printf("Result = %llu\n", mag);
        return 0;
    }

    // remove first and last digits then add swapped digits
    unsigned long long middle = (mag % pow10) / 10ULL; // strip first and last
    unsigned long long result_mag = last * pow10 + middle * 10ULL + first;

    if (negative) printf("Result = -%llu\n", result_mag);
    else printf("Result = %llu\n", result_mag);

    return 0;
}

