#include<stdio.h>
int main(){
    int salary, years, bonus;
    printf("Enter the salary of an employee: ");
    scanf("%d", &salary);
    printf("Enter the working years: ");
    scanf("%d", &years);
    if (years >= 5){
        if (salary > 5000){
            bonus = (salary*80)/100;
        }else {
        bonus = (salary*60)/100;
    } 
    }
    else if (years < 5){
        bonus = (salary*50)/100;
    } 
    printf("Bonus of the employee is %d", bonus);
    return 0;
}