#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    float d, r1, r2, r;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);

    d = (pow(b, 2)) - (4 * a * c);

    if (d < 0) {
        printf("No real roots\n");
    } else if (d > 0) {
        printf("Real roots\n");
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("The two roots are: %f %f\n", r1, r2);
    } else {
        printf("Same roots\n");
        r = -b / (2 * a);
        printf("Root is: %f\n", r);
    }

    return 0;
}
