#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, root1, root2, real, imag;
    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    d = b*b - 4*a*c;
    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2*a);
        root2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are real and different: %.0f, %.0f\n", root1, root2);
    } else if (d == 0) {
        root1 = -b / (2*a);
        printf("Roots are real and same: %.0f\n", root1);
    } else {
        real = -b / (2*a);
        imag = sqrt(-d) / (2*a);
        printf("Roots are complex\n");
    }
    return 0;
}
