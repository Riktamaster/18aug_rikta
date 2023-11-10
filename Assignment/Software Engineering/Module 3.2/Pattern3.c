/*WAP to print --> 1
                   2  3
                   4  5  6
                   7  8  9  10
                   11 12 13 14 15*/
#include<stdio.h>
int main()
{
	int i,j, num=1;
	for (i=1;i<=5;i++)//loop to print rows
	{for(j=1;j<=i;j++)//inner loop to print columns
	{printf("%d", num);//to print numbers in increasing order as column increases
	num++;
	printf(" ");//to print space
	}
	printf("\n");
	}
	return 0;
}
