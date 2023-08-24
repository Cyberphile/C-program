#include <stdio.h>

int main() {
    char ch;
    int i, up = 0, lc = 0;
    printf("Enter any 10 characters: ");
    
    for (i = 1; i <= 10; i++) {
        scanf(" %c", &ch);
        
        if (ch >= 'A' && ch <= 'Z') {
            up++;
        } else if (ch >= 'a' && ch <= 'z') {
            lc++;
        }
    }
    
    printf("\nUpperCase: %d", up);
    printf("\nLowerCase: %d", lc);
    
    return 0;
}
