//Write a program of Addition, Subtraction, Division, Multiplication using constructor//

#include<iostream>
using namespace std;
class calculator {
	
	double a,b;
	
	public:
		void get(){
			cout<<"Enter First number:";
			cin>>a;
			cout<<"Enter Second number:";
			cin>>b;
		}
		
		double add(){
			cout<<"\nAddition:"<<a+b;
			
		}
		double subs(){
			cout<<"\nSubstraction:"<<a-b;
		}
		double mul(){
			cout<<"\nMultiplication:"<<a*b;
		}
		double div(){
			if (b==0){
			cout<<"\nDivision by 0:"<<0;
			}
			else {
				cout<<"\nDivision:"<<a/b;
			}
		}
		
};

int main()
{
	calculator cal;
	cal.get();
	cal.add();
    cal.subs();
    cal.mul();
    cal.div();
	return 0;
}
