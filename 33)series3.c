#include <stdio.h>
int main(){
    int x,n,i;
    float s = 0.0;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Enter a number of loops: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        if (i%2 == 0)
        s -= (float)x/i;
        else 
        s += (float)x/i;
    }
    printf("\n%.2f", s);
    return 0;

}
