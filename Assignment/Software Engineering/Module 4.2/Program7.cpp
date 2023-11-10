/* Assume that the test results of a batch of students are stored in three different classes. 
Class Students are storing the roll number. 
Class Test stores the marks obtained in two subjects and 
class result contains the total marks obtained in the test. 
The class result can inherit the details of the marks obtained in the test and roll number of students. 
(Multilevel Inheritance) */

#include<iostream>
using namespace std;
class students{
	int roll_no;
	public:
	void get_roll_no(){
		cout<<"Enter roll number:";
		cin>>roll_no;
	}
	void display_roll_no(){
		cout<<"\nRoll number:"<<roll_no;
	}
};

class test:public students{
	protected:
	int s1,s2;
	public:
		void get_marks(){
			cout<<"Enter marks for subject 1:";
			cin>>s1;
			cout<<"Enter marks for subject 2:";
			cin>>s2;
		}
		
		void display_marks(){
			cout<<"\nMarks in Maths:"<<s1;
			cout<<"\nMarks in Science:"<<s2;
		}
};

class result:public test{
	public:
	int total_marks;
	void calculate_total_marks(){
	
		total_marks=s1+s2;
		cout<<"\nTotal marks:"<<s1+s2;
	}
	
};

int main(){
	result r1;
	r1.get_roll_no();
	r1.get_marks();
	cout<<"\nStudent's Result";
	cout<<"\n-----------------";
	r1.display_roll_no();
	r1.display_marks();
	r1.calculate_total_marks();
	return 0;
}
