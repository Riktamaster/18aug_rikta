//Write a program make a summation of given number (E.g., 1523 Ans: -11)

#include<stdio.h>

int main()
{
	int n, sum=0;
	//to get number from the user
	printf("Enter number:");
	scanf("%d", &n);
	//loop to make addition of the number entered by the user
	while (n!=0)
	{sum=sum+n%10;
	n=n/10;
	}
	//to display the summation 
	printf("Summation of number is:%d", sum);
	return 0;
}
