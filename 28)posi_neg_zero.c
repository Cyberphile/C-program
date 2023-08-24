#include <stdio.h>
int main(){
    int num, i, n=0;
    printf("Enter any 10 numbers: ");
    for (i = 1; i <= 10; i++ ){
        scanf("%d", &num);
        if (i%2 == 0)
        n++;
    }
    printf("\nNo. of even numbers are :%d", n);
    printf("\nNo. of odd numbers are :%d", 10-n);
    printf("\nNo. of zero numbers are :%d", 10-n==0);
    return 0;
}