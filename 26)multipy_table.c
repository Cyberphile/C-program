
#include <stdio.h>
int main(){
    int num, p,i;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i = 1; i<= 10; i++){
        p = num*i;
        printf("\n%d X %d = %d", p);
    }

}

#include<stdio.h>
int main(){
    int num,i,n=0;
    printf("Enter 10 numbers: ");
    for(i =1; i<=5; i++){
        scanf("%d", &num);
        if(num % 2 == 0){
            n++;
        }
    }
    printf("Number of even numbers: %d\n", n);
    
    return 0;
}

#include<stdio.h>
int main(){
    int num,i,n=1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i = num; i>=1; i--){
        n *= i;
    }
    printf("Factorial of %d is %d", num,n);
    
    return 0;
}


