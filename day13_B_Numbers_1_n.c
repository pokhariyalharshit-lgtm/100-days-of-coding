#include <stdio.h>

int main() {
    int n, i;
    if (scanf("%d", &n) != 1) {
        return 1; // invalid input
    }
    for (i = 1; i <= n; i++) {
        printf("%d\n", i);
    }
    return 0;
}
