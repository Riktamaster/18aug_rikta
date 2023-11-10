/*WAP to print --> A
                   A  B
                   A  B  C
                   A  B  C  D
                   A  B  C  D  E*/
#include<stdio.h>

int main()
{
int i,j;


for (i=0;i<5;i++)//loop to print rows
{for (j=0;j<=i;j++)//loop to print columns
{
printf("%c",'A'+j);//to print alphabets in given format
printf(" ");//to print space
}
printf("\n");
}
	return 0;
}
