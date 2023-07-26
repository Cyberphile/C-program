#include <stdio.h>

int main() {
    int age;
    printf("Enter the age: ");
    scanf("%d", &age);
    (age >= 60)? printf("Senior Citizen") : printf("Not a senior citizen");

    return 0;
}