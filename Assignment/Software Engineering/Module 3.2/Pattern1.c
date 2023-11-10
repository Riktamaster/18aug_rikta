/*WAP to print --> 1
                   10
                   101
                   1010
                   10101*/
#include<stdio.h>

int main()
{
	int i,j;
	for (i=1;i<=5;i++)//loop to print rows
	{for (j=1;j<=i;j++)//inner loop to print columns
	
	if(j%2==0)//condition to print the given pattern to number 1 and 0
	{printf("0");
	}
	else {printf("1");
	}
	printf("\n");
	}

	return 0;
}
