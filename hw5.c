#include <stdio.h>
int main(){
    int cost, quant, amnt;
    float discount, net_amnt;
    printf("Enter the cost of the product:");
    scanf("%d",&cost);
    printf("Enter the quantity of the product:");
    scanf("%d", &quant);
    amnt = cost * quant;
    discount = amnt/30 ;
    net_amnt = amnt - discount;
    printf("\nAmount:%d", amnt);
    printf("\ndiscount:%.2f", discount);
    printf("\nNet Amount:%.2f", net_amnt);
    return 0;
}