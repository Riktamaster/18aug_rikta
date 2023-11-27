//Write a program to find the multiplication values and the cubic values using inline function//

#include<iostream>
using namespace std;

class line{
	public:
		inline float mul(float a,float b){return (a*b);}
		
		inline float cube(float a){return (a*a*a);}
	
};

int main(){
	line l1;
	float num1,num2;
	
	cout<<"Enter value of number 1: ";
	cin>>num1;
	cout<<"Enter value of number 2: ";
	cin>>num2;
	cout<<"\nMultiplication: "<<l1.mul(num1,num2);
	cout<<"\nCubic value of number 1: "<<l1.cube(num1);
	cout<<"\nCubic value of number 2: "<<l1.cube(num2);
	return 0;
	}

