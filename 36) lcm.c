// Input 2 no. from thr user & find its LCM

#include<stdio.h>
int main (){
    int i,num1,num2,max, prod;
    print("Enter two number: ");
    scanf("%d %d", &num1, &num2);
    prod = num1*num2;
    printf("Product of the two number is : %d", prod);
    max = (num1>num2)? num1:num2;
    for (i = max; i <= prod; i++){
        if (i % num1 == 0 && i % num2 == 0){
            printf("The Lcm of %d %d is %d", num1, num2, i);
            break;        
        }
    }
    return 0;
}
