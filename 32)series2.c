#include<stdio.h>
int main(){
    int n,i,s=0,fact=1;
    printf("Enter a number of loop: ");
    scanf("%d", &n);
    for (i=1; i<= n; i++){
        fact *= i;
        s+= fact;
    }
    printf("\n%d", s);
    return 0;
}
