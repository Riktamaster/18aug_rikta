//WAP to find factorial of a number using recursion

#include<stdio.h>

long int fact(long int no)//udf to determine factorial of a number
{ if (no<=1)
{return 1;
}
return no*fact(no-1);
}
int main()
{int n;
printf("Enter number:");
scanf("%d", &n);
printf("Factorial is %d", fact(n));
}
