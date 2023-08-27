#include <stdio.h>
int main(){
int num1, num2,i;
printf("Enter number 1: ");
scanf("%d", &num1);
printf("Enter number 2: ");
scanf("%d", &num2);
 for (int i = 0; i < num2 ; ++i) {
     num1 = num1 + i;
    }
    printf("\n%d", num1);
return 0;
}