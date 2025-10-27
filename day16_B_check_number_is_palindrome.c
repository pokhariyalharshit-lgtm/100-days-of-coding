#include <stdio.h>
#include <string.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return 1;

    // Negative numbers are not considered palindrome here
    if (n < 0) {
        printf("Not Palindrome\n");
        return 0;
    }

    // Convert to string and check
    char s[32];
    int len;
    snprintf(s, sizeof(s), "%lld", n);
    len = (int)strlen(s);

    int i = 0, j = len - 1;
    while (i < j) {
        if (s[i] != s[j]) {
            printf("Not Palindrome\n");
            return 0;
        }
        i++; j--;
    }

    printf("Palindrome\n");
    return 0;
}
