//WAP to make Simple calculator(to make addition, substraction, multiplication, division and modulo)

#include<stdio.h>
int main()

{
    int a;
    printf("Enter value of a:");
    scanf("%d",&a);
    
    int b;
    printf("Enter value of b:");
    scanf("%d",&b);
    
    printf("\nAddition of a and b:%d",a+b);
    printf("\nSubstraction of a and b:%d",a-b);
    printf("\nMultiplication of a and b:%d",a*b);
    printf("\nDivision of a and b:%d",a/b);
    printf("\nModulo: %d",a%b);
    printf("\nIncrement of a:%d",++a);
    printf("\nDecrement of a:%d",--a);
    printf("\nIncrement of b:%d",++b);
    printf("\nDecrement of b:%d",--b);
    
    return 0;
    
    
    }
