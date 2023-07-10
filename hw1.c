#include <stdio.h>
int main(){
    int a, b,c, sum;
    float avg;
    printf ("Enter three number:");
    scanf ( "%d %d %d", &a, &b, &c );
    sum = a + b + c;
    avg = sum/3;
    printf ("Sum of the three integer is: %d", sum );
    printf("\n");
    printf ("Avg of th three integer is : %f", avg );
    return 0;
}