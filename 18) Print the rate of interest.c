#include <stdio.h>
int main(){
    int amnt,time;
    float rate_of_interest;
    printf("Enter the principle amount: ");
    scanf("%d", &amnt);
    printf("Enter the time(In years): ");
    scanf("%d", &time);
    if (time < 2){
        rate_of_interest = 4*amnt/100;
    }
    else if (time < 4 ){
        rate_of_interest = 6*amnt/100;
    }
    else if (time > 4 ){
        rate_of_interest = 7*amnt/100;
    }
    printf("rate of interset is %f", rate_of_interest);
    return 0;
}