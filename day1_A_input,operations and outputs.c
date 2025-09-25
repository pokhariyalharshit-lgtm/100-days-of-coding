#include<stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", a+b, a-b, a*b, a/b);
    return 0;
}