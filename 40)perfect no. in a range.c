
//To input a range of no. and print all the perfect number in the given range.
#include<stdio.h>
int main (){
    int num1,num2,i,n;
     printf("Enter the starting number: ");
    scanf("%d", &num1);
     printf("Enter the ending number: ");
    scanf("%d", &num2);
    for(i=num1; i<=num2; i++){
        int s=0;
        //printf("%d", i);
        for(n=1; n<i; n++){
            if (i%n==0){
                s+=n;
            }
        }
        if(s == i){
            printf("\n%d is a perfect number\n", i);
        }
  }
  return 0;
}
