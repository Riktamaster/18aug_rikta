//WAP to make simple calculator

#include<stdio.h>

int main()

{
	float Num1,Num2;
	char Op;
	printf("SIMPLE CALCULATOR\n");
	printf("-----------------\n");
	printf("Enter values:", Num1,Op,Num2);
	scanf("%f%c%f", &Num1,&Op,&Num2);
	
	switch (Op)
	
	{
		case '+': printf("Answer=%f", Num1+Num2);
		break;
		case '-': printf("Answer=%f", Num1-Num2);
		break;
		case '*': printf("Answer=%f", Num1*Num2);
		break;
		case'/': printf("Answer=%f", Num1/Num2);
		break;
		default: printf("Invalid input");
	}
	getch ();
	return 0;
}
