#include <stdio.h>
#include <string.h>

int main(void) {
    char s[4096];
    if (scanf("%4095s", s) != 1) return 1;

    size_t len = strlen(s);
    if (len == 0) {
        printf("Invalid binary number\n");
        return 0;
    }

    for (size_t i = 0; i < len; ++i) {
        if (s[i] != '0' && s[i] != '1') {
            printf("Invalid binary number\n");
            return 0;
        }
    }

    for (size_t i = 0; i < len; ++i) {
        s[i] = (s[i] == '0') ? '1' : '0';
    }

    printf("1's complement = %s\n", s);
    return 0;
}
