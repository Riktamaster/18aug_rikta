//Write a program to calculate the area of circle, rectangle and triangle using Function Overloading//

#include <iostream>
using namespace std;

class area {
public:
    float circle(float radius)//Function to calculate area of circle 
	{
        return 3.14*radius*radius;
    }

    float rectangle(float length, float breadth)//Function of calculate area of rectangle 
	{
        return length*breadth;
    }

    float triangle(float base, float height)//Function to calculate area of triangle
	{
        return 0.5*base*height;
    }
};

int main() {
    float radius, length, breadth, base, height, Area;
    int choice;
    area a1;//object created for class area

    cout<<"Enter your choice (1-3):\n1:Area of circle\n2:Area of rectangle\n3:Area of triangle\n";
	//Enter 1-->Area of circle, 2-->Area of rectangle, 3-->Area of triangle
    cin>>choice;

    if (choice==1){
        cout<<"Enter radius:";//Enter value for radius
        cin>>radius;
        Area=a1.circle(radius);//calling function to calculate area of circle
        cout<<"Area of circle is:"<<Area;//Display area calculated
    } 
	else if (choice==2){
        cout<<"Enter length:";//Enter value for length
        cin>>length;
        cout<<"Enter breadth:";//Enter value for breadth
        cin>>breadth;
        Area=a1.rectangle(length, breadth);//calling function to calculate area of rectangle
        cout<<"Area of rectangle is:"<<Area;//Display area calculated
    } 
	else if (choice==3){
        cout<<"Enter base:";//Enter value for base
        cin>>base;
        cout<<"Enter height:";//Enter value for height
        cin>>height;
        Area=a1.triangle(base, height);//calling function to calculate area of triangle
        cout<<"Area of triangle is:"<< Area;//Display area calculated
    } 
	else {
        cout<<"Invalid input!";
        return 1;
    }

    return 0;
}

