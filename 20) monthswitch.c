#include <stdio.h>
int main(){
    int y;
    printf ("Enter the month number (1-12): ");
    scanf("%d",&y);
    switch(y){
        case 1:
        printf("31 days in a month");
        break;
        case 2:
        printf("28 days in a month");
        break;
        case 3:
        printf("31 days in a month");
        break;
        case 4:
        printf("30 days in a month");
        break;
        case 5:
        printf("31 days in a month");
        break;
        case 6:
        printf("30 days in a month");
        break;
        case 7:
        printf("31 days in a month");
        break;
        case 8:
        printf("31 days in a month");
        break;
        case 9:
        printf("30 days in a month");
        break;
        case 10:
        printf("31 days in a month");
        break;
        case 11:
        printf("30 days in a month");
        break;
        case 12:
        printf("31 days in a month");
        break;
        default:
        printf("Invalid");
        break;
    }
    return 0;

}