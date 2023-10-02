//WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, Modulo)

#include<stdio.h>

int main()
{
	int a;
	printf("Enter value of a:");
	scanf("%d", &a);
	
	int b;
	printf("Enter value of b:");
	scanf("%d", &b);
	
	a+=b;
	printf("Addition is: %d", a);
	
	a-=b;
	printf("\nSubstraction is: %d", a);
	
	a*=b;
	printf("\nMultiplication is: %d", a);
	
	a/=b;
	printf("\nDivision is: %d", a);
	
	a%=b;
	printf("\nModulo is: %d", a);
	
	return 0;
}

