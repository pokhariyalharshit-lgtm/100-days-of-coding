#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 1;

    if (n <= 0) {
        printf("Sum = 0.000000\n");
        return 0;
    }

    double sum = 0.0;
    for (int k = 1; k <= n; ++k) {
        double num = 2.0 * k;              // 2,4,6,...
        double den = 3.0 + (k - 1) * 4.0;  // 3,7,11,... => 4k-1
        sum += num / den;
    }

    printf("Sum = %.6f\n", sum);
    return 0;
}
