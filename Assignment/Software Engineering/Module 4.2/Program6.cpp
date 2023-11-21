/* Create a class person having members name and age. 
Derive a class student having member percentage. 
Derive another class teacher having member salary. 
Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)  */

#include<iostream>
using namespace std;

class person{
public:
	int age;
	string name;
		void p_getdata(){
			cout<<"Enter your name:";
			cin>>name;
			cout<<"Enter your age:";
			cin>>age;
		}		
};

class student{
	public:
	float per;
		void s_getdata(){
			cout<<"Enter student percentage:";
			cin>>per;
		}	
};

class teacher{
	public:
	int salary;
		void t_getdata(){
			cout<<"Enter salary:";
			cin>>salary;
		}
};

class D:public person,public student,public teacher{
	public:
	void display(){
		cout<<"--------------------------------";
		cout<<"\nName:"<<name;
			cout<<"\nAge:"<<age<<"years";
			cout<<"\nStudent's percentage:"<<per<<"%";
			cout<<"\nTeacher's salary:Rs."<<salary;
		
	}
};

int main(){
	D d1;
	d1.p_getdata();
	d1.s_getdata();
	d1.t_getdata();
	d1.display();
	return 0;
}
