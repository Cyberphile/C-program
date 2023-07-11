#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter three sides of a Triangle:");
    scanf("%d %d %d", &a,&b, &c);
    (a == b && a == c)? printf("it is an equilateral triangle"): printf("It is not an equilateral triangle");
    return 0;
}