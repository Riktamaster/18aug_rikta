//WAP to swap two numbers using third variable

#include<stdio.h>

int main()
{
int num1, num2,temp;
printf("Enter number 1:");
scanf("%d", &num1);

printf("Enter number 2:");
scanf("%d", &num2);

temp=num1;
num1=num2;
num2=temp;

printf("\nnumber1=%d\nnumber2=%d", num1,num2);

return 0;
}
