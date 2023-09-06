
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

