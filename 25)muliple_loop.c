#include<stdio.h>
int main(){
    int num1,num2,i;
    printf("Enter the starting and the ending numbers: ");
    scanf("%d %d", &num1, &num2);
    for (i = num1; i <= num2; i++)
    {
        if (i%3==0 || i%5==0){ 
            printf("\n%d", i);

        } 
        
    }
}