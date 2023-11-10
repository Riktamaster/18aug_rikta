/* Write a program for Mathematical operations like Addition, Subtraction, Multiplication, Division 
of two number using different parameters and Function Overloading */

#include<iostream>
using namespace std;

class operation{
	public:
	
		float add(float a,float b)//Function for addition
		{
			return a+b;
		}
		float sub(float a,float b)//Function for substraction
		{
			return a-b;
		}
		float mul(float a,float b)//Function for multiplication
		{
			return a*b;
		}
		float div(float a,float b)//Function for division
		{
			if (b!=0){
				return a/b;
			}
			else {
			return 0;}
		} 
};

int main(){
	float a,b,result;
	char op;
	operation obj;
	
	cout<<"Enter values:";//Enter operation values:number 1-->(+,-,*,/)-->number 2
	cin>>a>>op>>b;
	
	switch (op){
		case '+': result=obj.add(a,b);//Addition operation
		break;
		case '-': result=obj.sub(a,b);//Substraction operation
		break;
		case '*': result=obj.mul(a,b);//Multiplication operation
		break;
		case '/': result=obj.div(a,b);//Division operation
		break;
		default: cout<<"Invalid values entered!";
		return 1;
		}
		
		cout<<"Answer:"<<result;//Display answer
		return 0;
}
