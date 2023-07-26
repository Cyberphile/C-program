#include <stdio.h>
int main(){
    int cost, quantity;
    float amount, discount,netamnt;
    printf("Enter the cost: ");
    scanf("%d", &cost);
    printf("Enter the quantity: ");
    scanf("%d", &quantity);
    amount = cost*quantity;
   if (amount < 1000){
        discount = 0;
        printf("Discount: 0");
    } else if (amount < 3000){
        discount = amount*0.1;
        printf("Discount : %0.2f", discount);
        
    } else if (amount <5000 ){
        discount = amount*0.2;
         printf ("Discount: %0.2f", discount);
       
    } else if (amount >= 5000){
        discount = amount*0.3;
        printf("Disount: %0.2f", discount);
       
    }
    netamnt = amount-discount;
    printf("\nNet Amount : %0.2f", netamnt);


    return 0;
}


    