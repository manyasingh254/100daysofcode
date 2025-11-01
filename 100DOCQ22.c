//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main() {
    float cost, sell, percent;
    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cost, &sell);

    if(sell > cost) {
        percent = ((sell - cost) / cost) * 100;
        printf("Profit %.0f%%", percent);
    } else if(sell < cost) {
        percent = ((cost - sell) / cost) * 100;
        printf("Loss %.0f%%", percent);
    } else {
        printf("No Profit No Loss");
    }
    return 0;
}