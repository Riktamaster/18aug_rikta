//WAP to make simple calculator

#include<stdio.h>

int main()

{
	float Num1,Num2;
	char Op;
	printf("SIMPLE CALCULATOR\n");
	printf("-----------------\n");
	//to get data from user
	printf("Enter values:", Num1,Op,Num2);
	scanf("%f%c%f", &Num1,&Op,&Num2);
	
	switch (Op)//function to do required operations entered by the user
	
	{
		case '+': printf("Answer=%f", Num1+Num2);//to carry out addition
		break;
		case '-': printf("Answer=%f", Num1-Num2);//to carry out substraction
		break;
		case '*': printf("Answer=%f", Num1*Num2);//to carry out multiplication
		break;
		case'/': printf("Answer=%f", Num1/Num2);//to carry out division
		break;
		default: printf("Invalid input");
	}
	getch ();
	return 0;
}
