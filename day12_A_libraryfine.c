#include <stdio.h>

int main() {
    int days;
    int fine = 0;
    printf("Enter number of late days: ");
    if (scanf("%d", &days) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    if (days <= 0) {
        fine = 0;
        printf("Fine = %d\n", fine);
        return 0;
    }

    if (days > 30) {
        printf("Membership Cancelled\n");
        return 0;
    }

    if (days <= 5) {
        fine = days * 2;
    } else if (days <= 10) {
        fine = 5 * 2 + (days - 5) * 4;
    } else {
        // days between 11 and 30 inclusive
        fine = 5 * 2 + 5 * 4 + (days - 10) * 6;
    }

    printf("Fine = %d\n", fine);
    return 0;
}
