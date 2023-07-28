#include<stdio.h>
int main(){
    char alphabet;
    printf("Enter a character: ");
    scanf(" %c", &alphabet);
    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u'){
        printf("%c is a vowel");
    }
    else{
        printf("%c is not a vowel");
    }
    return 0;
}