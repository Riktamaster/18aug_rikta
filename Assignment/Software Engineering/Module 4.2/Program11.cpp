//Write a program to calculate the area of circle, rectangle and triangle using Function Overloading//

#include <iostream>
using namespace std;

class area {
public:
    float cal_area(float radius)//Function to calculate area of circle 
	{
        return 3.14*radius*radius;
    }

    float cal_area(float length, float breadth)//Function of calculate area of rectangle 
	{
        return length*breadth;
    }

    float cal_area_t(float base, float height)//Function to calculate area of triangle
	{
        return 0.5*base*height;
    }
};

int main() {
    float radius, length, breadth, base, height, result;
    int choice;
    area a1;//object created for class area

    cout<<"Enter your choice (1-3):\n1:Area of circle\n2:Area of rectangle\n3:Area of triangle\n";
	//Enter 1-->Area of circle, 2-->Area of rectangle, 3-->Area of triangle
    cin>>choice;

    if (choice==1){
        cout<<"Enter radius:";//Enter value for radius
        cin>>radius;
        result=a1.cal_area(radius);//calling function to calculate area of circle
        cout<<"Area of circle is:"<<result;//Display area calculated
    } 
	else if (choice==2){
        cout<<"Enter length:";//Enter value for length
        cin>>length;
        cout<<"Enter breadth:";//Enter value for breadth
        cin>>breadth;
        result=a1.cal_area(length, breadth);//calling function to calculate area of rectangle
        cout<<"Area of rectangle is:"<<result;//Display area calculated
    } 
	else if (choice==3){
        cout<<"Enter base:";//Enter value for base
        cin>>base;
        cout<<"Enter height:";//Enter value for height
        cin>>height;
        result=a1.cal_area_t(base, height);//calling function to calculate area of triangle
        cout<<"Area of triangle is:"<<result;//Display area calculated
    } 
	else {
        cout<<"Invalid input!";
        return 0;
    }

    return 0;
}

