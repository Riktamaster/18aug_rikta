//WAP to make Simple calculator(to make addition, substraction, multiplication, division and modulo)

#include<stdio.h>
int main()

{
    int a;
    //to get value of a from user
    printf("Enter value of a:");
    scanf("%d",&a);
    
    int b;
    //to get value of b from user
    printf("Enter value of b:");
    scanf("%d",&b);
    
    printf("\nAddition of a and b:%d",a+b);//to print sum of two numbers
    printf("\nSubstraction of a and b:%d",a-b);//to print substraction of two numbers
    printf("\nMultiplication of a and b:%d",a*b);//to print multiplication of two numbers
    printf("\nDivision of a and b:%d",a/b);//to print division of two numbers
    printf("\nModulo: %d",a%b);//to print modulo of two numbers
    printf("\nIncrement of a:%d",++a);//to print increment of a
    printf("\nDecrement of a:%d",--a);//to print decrement of b
    printf("\nIncrement of b:%d",++b);//to print increment of a
    printf("\nDecrement of b:%d",--b);//to print decrement of b 
    
    return 0;
    
    
    }
