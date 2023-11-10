/*WAP to print --> *
                   * *
                   * * *
                   * * * *
                   * * * * *
                   * * * * * *
                   * * * * * 
                   * * * *
                   * * *
                   * *
                   *       */
                   
#include<stdio.h>
int main()
{
	int i,j;
	for (i=1;i<=6;i++)//loop to print rows for upper half of pyramid
	{for (j=1;j<=i;j++)//inner loop to print columns for upper half of pyramid
	{
	printf(" ");//to print space
	printf("*");//to print '*'
	}
	printf("\n");
}
for (i=1;i<=5;i++)//loop to print rows of lower half of pyramid
	{for (j=5;j>=i;j--)//inner loop to print columns of lower half of pyramid
	{
	printf(" ");//to print space
	printf("*");//to print '*'
	}
	printf("\n");
}
	return 0;
}

