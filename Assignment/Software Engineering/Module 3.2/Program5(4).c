//WAP to print factorial of a given number

#include <stdio.h>
int main()
{
int n;
printf("Enter number:");
scanf("%d", &n);

int i, fact=1;
for (i=1;i<=n;i++)
{
	fact=fact*i;}
	
	printf("Factorial is %d\n", fact);


return 0;
}
