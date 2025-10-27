#include <stdio.h>

int main(void) {
    int i, j, k;
    for (i = 5; i >= 1; --i) {
        for (j = 1; j < i; ++j) putchar(' ');
        for (k = i; k <= 5; ++k) printf("%d", k);
        putchar('\n');
    }
    return 0;
}
