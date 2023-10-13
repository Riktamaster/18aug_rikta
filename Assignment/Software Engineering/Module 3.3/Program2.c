//WAP of Addition, Substraction, Multiplication and Division using Switch case. (Must be Menu driven)

#include<stdio.h>

int main()

{
	float Num1,Num2;
	int Op;
	printf("SIMPLE CALCULATOR\n");
	printf("-----------------\n");
	printf("1. Addition\n2. Substraction\n3. Multiplication\n4. Division\n");//Display options of arithmetic operations
	printf("\nEnter Num1:");
	scanf("%f", &Num1);
	printf("\nEnter Num2:");
	scanf("%f", &Num2);
	printf("\nEnter Arithmetic operation choice(1-4):");//Enter 1-->Addition,2-->Substraction,3-->Multiplication,4-->Division
	scanf("%d", &Op);
	
	switch (Op)//performs arithmetic operation choosen and prints the result
	
	{
		case 1: printf("Answer=%0.2f", Num1+Num2);
		break;
		case 2: printf("Answer=%0.2f", Num1-Num2);
		break;
		case 3: printf("Answer=%0.2f", Num1*Num2);
		break;
		case 4: printf("Answer=%0.2f", Num1/Num2);
		break;
		default: printf("Invalid input");
	}

	return 0;
}
