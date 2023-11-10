//WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, Modulo)

#include<stdio.h>

int main()
{
	int a;
	//to get value of a
	printf("Enter value of a:");
	scanf("%d", &a);
	
	int b;
	//to get value of b
	printf("Enter value of b:");
	scanf("%d", &b);
	
	a+=b;//to add a and b
	printf("Addition is: %d", a);//to print addition of a and b
	
	a-=b;//to substract a and b
	printf("\nSubstraction is: %d", a);//to print substraction of a and b
	
	a*=b;//to multiply a and b
	printf("\nMultiplication is: %d", a);//to print multiplication of a and b
	
	a/=b;//to divide a and b
	printf("\nDivision is: %d", a);//to print division of a and b
	
	a%=b;//to find modulo
	printf("\nModulo is: %d", a);//to print modulo 
	
	return 0;
}

