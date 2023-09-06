// Fibonacci series
#include <stdio.h>
int main(){
    int i,n,a=0,b=1,c;
    printf("Enter the nth value = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++ ){
        printf("\n%d", a);
        c = a+b;
        a=b;
        b=c;
    }
    
    return 0;
    
    }
    
   
