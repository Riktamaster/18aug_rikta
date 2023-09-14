//WAP to calculate simple interest

#include<stdio.h>

int main()
{
    float P;//value of principal
    printf("Enter value of P:");
    scanf("%f", &P);
    
    float R;//value of rate of interest
    printf("Enter value of R:");
    scanf("%f", &R);
    
    float T;//value of time
    printf("Enter value of T:");
    scanf("%f", &T);
    
    printf("\nSimple interest=%f", P*(R/100)*T);
    
    return 0;
    
    }
