#include <stdio.h>

int main() {
   int l, b;
   printf("Enter the lenght of the cardboard:");
   scanf("%d", &l);
   printf("Enter the breadth of the cardboard:");
   scanf("%d", &b);
   (l == b)? printf("It is a square"): printf("It is a rectangle");
    return 0;
}
