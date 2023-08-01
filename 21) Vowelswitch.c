#include <stdio.h>
int main(){
    char ch;
    printf("\n Enter an alphabet: ");
    scanf("%c",&ch);
    switch (ch){
        case 'a':
        case 'A':
        printf ("Is is a vowel");
        break;
        case 'e':
        case 'E':
        printf ("Is is a vowel");
        break;
        case 'i':
        case 'I':
        printf ("Is is a vowel");
        break;
        case 'o':
        case 'O':
        printf ("Is is a vowel");
        break;
        case 'u':
        case 'U':
        printf ("Is is a vowel");
        break;
        default:
        printf ("It is a consonant");
        break;
            }
    return 0;        
}