#include <stdio.h>
int main() {
    int sp, cp;
    float profit;
    printf("Enter the selling price:");
    scanf("%d", &sp);
    printf("\nEnter the cost price:");
    scanf("%d", &cp);
    profit = sp - cp;
    printf ("\nThe profit ot the product is: %f", profit);
    return 0;

}
