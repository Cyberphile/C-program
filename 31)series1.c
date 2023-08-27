#include <stdio.h>
int main(){
    int i,x,n,s=0,r;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Enter no. of loop : ");
    scanf("%d", &n);
    for (i=1; i<=n; i++){
        r = i*x;
        s+= r;
    }
    printf("%d", s);
    return 0;

}