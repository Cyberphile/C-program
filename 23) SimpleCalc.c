#include<stdio.h>
    int main() {
	float num1, num2, result;
	char opt;
	printf("*************************\n");
	printf("   SIMPLE CALCULATOR   \n");
	printf("*************************\n");
	printf("\nEnter two numbers : ");
	scanf("%f %f",&num1,&num2);
	printf("\n + - Add");
	printf("\n - - Subtract");
	printf("\n * - Multiply");
	printf("\n / - Divide \n ");
	printf("\nEnter the operator : ");
	scanf(" %c",&opt);
    switch(opt){
		case '+':
		result = num1 + num2;
		printf("\n********************");
		printf("\n Sum is %.2f",result);
		printf("\n********************");
		break;
		case '-':
		result = num1 - num2;
		printf("\n********************");
		printf("\n Difference is %.2f",result);
		printf("\n********************");
		break;
		case '*':
		result = num1 * num2;
		printf("\n********************");
		printf("\n Product is %.2f",result);
		printf("\n********************");
		break;
		case '/':
		result = num1 / num2;
		printf("\n********************");
		printf("\n Quotient is %.2f",result);
		printf("\n********************");
		break;
		default:
		printf("\nInvalid");
	}
	return 0;
}
