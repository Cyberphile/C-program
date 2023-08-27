// Input a number and chect whether the number is a perfect no. or not ?

#include <stdio.h>
int main (){
    int i,num,s=0,sum;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i=1; i < num; i++){
        if (num % i==0){
            s+=i;
        }
    }
    printf("\n%d", s);
     if(s == num){
                printf("\n%d is a perfect number", num);
            } else {
                printf("\n%d is not a perfect number", num);
            }
    return 0;
}