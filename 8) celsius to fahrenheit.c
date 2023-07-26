#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    printf("Enter the celsius: ");
    scanf("%f",&celsius);
    fahrenheit = (1.8 * celsius) + 32;
    printf("The fahrenheit is : %.2f", fahrenheit);
    return 0;
}
