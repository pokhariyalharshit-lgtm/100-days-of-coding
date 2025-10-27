#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 1;
    if (n <= 0) return 0;

    int *arr = malloc(n * sizeof(int));
    if (!arr) return 1;

    for (int i = 0; i < n; ++i) {
        if (scanf("%d", &arr[i]) != 1) { free(arr); return 1; }
    }

    // Print elements
    for (int i = 0; i < n; ++i) {
        printf("%d", arr[i]);
        if (i + 1 < n) putchar(' ');
    }
    putchar('\n');

    free(arr);
    return 0;
}
