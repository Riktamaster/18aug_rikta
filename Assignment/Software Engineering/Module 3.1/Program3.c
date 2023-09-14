//WAP to find area of circle, rectangle and triangle

#include<stdio.h>
int main()
{
    float radius;
    printf("Enter radius:");
    scanf("%f", &radius);
    
    printf("Area of a circle:%f",3.14*radius*radius);
    
    float length;
    printf("\nEnter length:");
    scanf("%f", &length);
    
    float breadth;
    printf("Enter breadth:");
    scanf("%f", &breadth);
    
    printf("Area of a rectangle:%f", length*breadth);
    
    float base;
    printf("\nEnter base:");
    scanf("%f", &base);
    
    float height;
    printf("Enter height:");
    scanf("%f", &height);
    
    printf("Area of a triangle:%f", 0.5*base*height);
    
    
    getch();
    }
