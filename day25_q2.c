#include <stdio.h>

int main(void) {
    int n = 5;
    for (int i = 0; i < n; ++i) {
        for (int s = 0; s < i; ++s) putchar(' ');
        for (int j = 0; j < n - i; ++j) putchar('*');
        putchar('\n');
    }
    return 0;
}
