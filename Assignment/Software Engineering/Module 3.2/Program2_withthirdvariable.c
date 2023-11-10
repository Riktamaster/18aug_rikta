//WAP to swap two numbers using third variable

#include<stdio.h>

int main()
{
int num1, num2,temp;
//to get number 1 from user
printf("Enter number 1:");
scanf("%d", &num1);
//to get number 2 from user
printf("Enter number 2:");
scanf("%d", &num2);
//formula to swap two numbers using third variable
temp=num1;
num1=num2;
num2=temp;
//to print the swapped numbers
printf("\nnumber1=%d\nnumber2=%d", num1,num2);

return 0;
}
