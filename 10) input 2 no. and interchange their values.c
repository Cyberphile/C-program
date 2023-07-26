#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter two number a & b: ");
    scanf("%d %d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("The value of a is %d and b is %d after the interchange",a,b);
    return 0;
}