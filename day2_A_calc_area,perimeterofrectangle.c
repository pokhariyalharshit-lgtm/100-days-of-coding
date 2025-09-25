#include <stdio.h>

int main() {
    int length, breadth;
    printf("Enter length and breadth: ");
    scanf("%d %d", &length, &breadth);
    printf("Area=%d, Perimeter=%d\n", length * breadth, 2 * (length + breadth));
    return 0;
}
