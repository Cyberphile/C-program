// Input a no. from the user and check the no. of digits 
#include <stdio.h>
int main(){
    int num;
    int count =0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for ( ;num!=0 ; num/=10){
        count ++;
    }
    printf(" No. of Digits are :  %d", count);
    return 0;
}