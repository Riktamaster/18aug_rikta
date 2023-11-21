//Write a program to find the max number from given two numbers using friend function

#include<iostream>
using namespace std;

class Max{
	
	private:
	int a,b;
	
	public:
		//to get data from user
		void get_data(){
			cout<<"Enter number 1:";
			cin>>a;
			cout<<"Enter number 2:";
			cin>>b;
		}
		//to display data entered ny user
		void display_data(){
			cout<<"Number 1="<<a<<endl;
			cout<<"Number 2="<<b<<endl;
		}
		//friend function to find out max number among the two numbers given by user
		friend void max_num(Max &m);
};
//function to find out the max number among the given two numbers
void max_num(Max &m){

	if (m.a>m.b){
		cout<<"Greater number is:"<<m.a;
	}
	
	else {
		cout<<"Greater number is:"<<m.b;
	}
}

int main(){
	Max m;//creating object of the class
	m.get_data();
	cout<<"------------------"<<endl;
	m.display_data();
	max_num(m);
	return 0;
}
