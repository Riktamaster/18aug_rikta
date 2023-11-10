 //Write a program you have to make a summation of first and last Digit. (E.g.,1234 Ans: -5)

#include<stdio.h>

int main()

{
	int n, first_digit, last_digit, sum=0;
	//to get the number from the user
	printf("Enter number:");
	scanf("%d", &n);
	
	last_digit=n%10;//to get the last digit of the number entered by the user
	//loop to make addition of first and last digit
	while (n>=10)
	{n=n/10;
	}
	first_digit=n;
	
	sum=first_digit+last_digit;//to add first and last digit
	printf("Sum of first and last digit:%d", sum);//to print the summation of first and last digit
	
	return 0;
}
