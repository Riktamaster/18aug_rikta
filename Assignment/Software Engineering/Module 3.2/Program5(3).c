//WAP to print table up to given number

#include<stdio.h>

int main()

{
	int n,i;
	//to get number from the user
	printf("Enter number:");
	scanf("%d", &n);
	
	for (i=1;i<=10;i++)//loop to print multiplication table of the number entered by the user
	{printf("%d\n", n*i);
	}
	
	return 0;
}
