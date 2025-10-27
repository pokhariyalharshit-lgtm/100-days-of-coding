#include <stdio.h>

int main() {
    int units;
    double bill = 0.0;
    printf("Enter units consumed: ");
    if (scanf("%d", &units) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    if (units < 0) {
        printf("Invalid units\n");
        return 1;
    }

    if (units <= 100) {
        bill = units * 5.0;
    } else if (units <= 200) {
        bill = 100 * 5.0 + (units - 100) * 7.0;
    } else if (units <= 300) {
        bill = 100 * 5.0 + 100 * 7.0 + (units - 200) * 10.0;
    } else {
        bill = 100 * 5.0 + 100 * 7.0 + 100 * 10.0 + (units - 300) * 12.0;
    }

    printf("Bill = %.2f\n", bill);
    return 0;
}
