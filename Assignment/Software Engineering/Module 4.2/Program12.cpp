//Write a program to swap the two numbers using friend function without using third variable

#include<iostream>
using namespace std;

class Swap{
	
	private:
	int a,b;
	
	public:
		//to get data from the user
		void get_data(){
			cout<<"Enter number 1:";
			cin>>a;
			cout<<"Enter number 2:";
			cin>>b;
		}
		//to display data obtained from user
		void display_data(){
			cout<<"Number 1 = "<<a<<endl;
			cout<<"Number 2 = "<<b<<endl;
		}
		
		friend void swap_num(Swap &s);//friend function to swap two numbers
};
//function to swap two numbers obtained from the user
void swap_num(Swap &s){
	int a,b;
	s.a=s.a+s.b;
	s.b=s.a-s.b;
	s.a=s.a-s.b;
}

int main(){
	Swap s;//creating object of class
	s.get_data();
	cout<<"---------------"<<endl;
	cout<<"Before swapping:"<<endl;
	s.display_data();
	cout<<"---------------"<<endl;
	swap_num(s);
	cout<<"After swapping:"<<endl;
	s.display_data();
	
	return 0;
}
