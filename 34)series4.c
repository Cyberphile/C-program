#include <stdio.h>
#include <math.h>
int main(){
    int x,n,i,s=0, res;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Enter a number of loops: ");
    scanf("%d", &n);
    for(i=1; i <= n; i++){
        res = pow(x,i);
        if (i%3 == 0)
        s -= res;
        else
        s += res;
    }
    printf("\n%d", s);
    return 0;

}