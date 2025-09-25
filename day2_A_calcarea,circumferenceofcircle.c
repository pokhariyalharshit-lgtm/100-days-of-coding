#include <stdio.h>
#define PI 3.14

int main() {
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("Area=%.2f, Circumference=%.2f\n", PI * radius * radius, 2 * PI * radius);
    return 0;
}
