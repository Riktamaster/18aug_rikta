/*WAP to print --> A
                   BC
                   DEF
                   GHIJ
                   KLMN0*/
#include<stdio.h>

int main()
{int i,j;
char ch='A';

for (i=1;i<=5;i++)//loop to print rows
{for(j=1;j<=i;j++)//inner loop to print columns
{printf("%c",ch);//to print alphabets in increasing order as column increases
ch++;
}
printf("\n");
}
return 0;
}
