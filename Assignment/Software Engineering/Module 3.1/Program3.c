//WAP to find area of circle, rectangle and triangle

#include<stdio.h>
int main()
{
    float radius;
    //to get value of radius from user
    printf("Enter radius:");
    scanf("%f", &radius);
    //to print area of circle
    printf("Area of a circle:%f",3.14*radius*radius);
    
    float length;
    //to get length and breadth from user
    printf("\nEnter length:");
    scanf("%f", &length);
    
    float breadth;
    printf("Enter breadth:");
    scanf("%f", &breadth);
    //to print area of rectangle
    printf("Area of a rectangle:%f", length*breadth);
    
    float base;
    //to get base and height from user
    printf("\nEnter base:");
    scanf("%f", &base);
    
    float height;
    printf("Enter height:");
    scanf("%f", &height);
    //to print area of triangle
    printf("Area of a triangle:%f", 0.5*base*height);
    
    
    getch();
    }
