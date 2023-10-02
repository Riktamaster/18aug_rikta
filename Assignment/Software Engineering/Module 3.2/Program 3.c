//WAP to find number is even or odd using ternary operator

#include<stdio.h>
int main()

{int number;
printf("Enter the number:");
scanf("%d", &number);

(number %2==0)?printf("Even number\n"):printf("Odd number\n");

return 0;
}
