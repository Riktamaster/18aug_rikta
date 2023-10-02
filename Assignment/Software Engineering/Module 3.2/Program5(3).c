//WAP to print table up to given number

#include<stdio.h>

int main()

{
	int n,i;
	printf("Enter number:");
	scanf("%d", &n);
	
	for (i=1;i<=10;i++)
	{printf("%d\n", n*i);
	}
	
	return 0;
}
