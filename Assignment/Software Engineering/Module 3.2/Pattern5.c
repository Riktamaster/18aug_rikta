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
	for (i=1;i<=6;i++)
	{for (j=1;j<=i;j++)
	{
	printf(" ");
	printf("*");
	}
	printf("\n");
}
for (i=1;i<=5;i++)
	{for (j=5;j>=i;j--)
	{
	printf(" ");
	printf("*");
	}
	printf("\n");
}
	return 0;
}

