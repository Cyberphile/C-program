#include <stdio.h>
int main(){
    int b, h;
    float area;
    printf("Enter the base:");
    scanf("%d", &b);
    printf("Enter the height:");
    scanf("%d", &h);
    area = 1.5* b * h;
    printf("The area of right angle is: %.2f", area);
    return 0;
}
