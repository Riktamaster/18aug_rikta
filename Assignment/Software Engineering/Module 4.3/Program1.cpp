//Write a program of to swap the two values using templates//

#include<iostream>
using namespace std;
template <class T>
void swapnumbers(T &a,T &b){
	T temp=a;
	a=b;
	b=temp;	
}

int main(){
	int num1,num2;
	cout<<"Enter value of Number 1:";
	cin>>num1;
	cout<<"Enter value of Number 2:";
	cin>>num2;
	cout<<"------------------------"<<endl;
	cout<<"Before swapping:"<<endl;
	cout<<"Number 1:"<<num1<<endl;
	cout<<"Number 2:"<<num2<<endl;
	
	swapnumbers(num1,num2);
	cout<<"----------------"<<endl;
	cout<<"After swapping:"<<endl;
	cout<<"Number 1:"<<num1<<endl;
	cout<<"Number 2:"<<num2<<endl;
	return 0;
}
