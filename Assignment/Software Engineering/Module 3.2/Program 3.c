//WAP to find number is even or odd using ternary operator

#include<stdio.h>
int main()

{int number;
//to get number from user
printf("Enter the number:");
scanf("%d", &number);
//function to find out whether the given number is odd or even
(number %2==0)?printf("Even number\n"):printf("Odd number\n");

return 0;
}
