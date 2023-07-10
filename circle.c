#include<stdio.h>
int main() {
    int radius;
    float area, circumference;
    printf("Enter the radius: ");
    scanf("%d", &radius);
    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;
    printf("The area of the circle is : %f", area);
    printf("\n");
    printf("The circumference of the circle is : %f", circumference);
    return 0;

} 
