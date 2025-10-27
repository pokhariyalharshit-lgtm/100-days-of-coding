#include <stdio.h>

int is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int month, year = 0;
    printf("Enter month number (1-12): ");
    if (scanf("%d", &month) != 1) return 0;

    if (month == 2) {
        printf("Enter year (enter 0 to assume non-leap): ");
        scanf("%d", &year);
    }

    switch (month) {
        case 1: printf("January, 31 days\n"); break;
        case 2:
            if (year != 0 && is_leap_year(year))
                printf("February, 29 days\n");
            else
                printf("February, 28 days\n");
            break;
        case 3: printf("March, 31 days\n"); break;
        case 4: printf("April, 30 days\n"); break;
        case 5: printf("May, 31 days\n"); break;
        case 6: printf("June, 30 days\n"); break;
        case 7: printf("July, 31 days\n"); break;
        case 8: printf("August, 31 days\n"); break;
        case 9: printf("September, 30 days\n"); break;
        case 10: printf("October, 31 days\n"); break;
        case 11: printf("November, 30 days\n"); break;
        case 12: printf("December, 31 days\n"); break;
        default: printf("Invalid month number. Please enter a value between 1 and 12.\n");
    }

    return 0;
}
