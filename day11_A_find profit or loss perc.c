#include <stdio.h>

int main() {
    float cost, sell, diff, perc;
    printf("Enter cost price and selling price: ");
    if (scanf("%f %f", &cost, &sell) != 2) {
        printf("Invalid input\n");
        return 1;
    }

    if (sell > cost) {
        diff = sell - cost;
        perc = (diff / cost) * 100.0f;
        printf("Profit = %.2f, Profit Percentage = %.2f%%\n", diff, perc);
    } else if (cost > sell) {
        diff = cost - sell;
        perc = (diff / cost) * 100.0f;
        printf("Loss = %.2f, Loss Percentage = %.2f%%\n", diff, perc);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
