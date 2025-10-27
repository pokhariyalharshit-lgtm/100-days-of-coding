#include <stdio.h>

int main(void) {
    // Print increasing odd star counts 1,3,5,7,9
    for (int stars = 1; stars <= 9; stars += 2) {
        for (int i = 0; i < stars; ++i) putchar('*');
        putchar('\n');
    }
    // Print decreasing odd star counts 7,5,3,1
    for (int stars = 7; stars >= 1; stars -= 2) {
        for (int i = 0; i < stars; ++i) putchar('*');
        putchar('\n');
    }
    return 0;
}
