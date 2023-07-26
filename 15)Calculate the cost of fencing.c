#include <stdio.h>
int main(){
    int l,b, peri, total_cost;
    char type,A,B;
    printf("Enter the length of the field: ");
    scanf("%d", &l);
    printf("Enter the breadth of the field: ");
    scanf("%d", &b);
    peri = 2*(l+b);
    printf("\nEnter the type(A or B): ");
    scanf("%c", &type);
    if(type == 'A'){
        total_cost = 10*peri;
    }
    else if (type == 'B'){
        total_cost = 15*peri;
    }
    printf("\nTotal cost of fencing is: %d", total_cost);
    return 0;



}
