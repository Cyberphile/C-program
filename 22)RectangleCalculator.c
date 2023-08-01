#include <stdio.h>
int main(){
    int l,b, area, peri, ch;
    printf("Enter the length: ");
    scanf("%d", &l);
    printf("Enter the breadth : ");
    scanf("%d",&b);
    printf("\n Choices available: \n 1.Area \n 2.breadth \n");
    printf("\n Enter your choice: ");
    scanf("%d", &ch);
    
    switch(ch){
        case 1:
        area = l*b;
        printf("Area of the rectangle is %d",area);
        break;
        case 2:
        peri = 2*(l+b);
        printf("Perimeter of the rectangle is %d", peri);
        break;
        default:
        printf("invalid");
        break;
    }
    return 0;
    
    
}