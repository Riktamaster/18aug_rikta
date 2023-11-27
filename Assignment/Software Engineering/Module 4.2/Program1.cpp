//WAP to create simple calculator using class//

#include<iostream>
using namespace std;
class calculator {
	
	float a,b;
	
	public:
		void get(){
			cout<<"Enter First number:";
			cin>>a;
			cout<<"Enter Second number:";
			cin>>b;
		}
		
		float add(){
			return a+b;
		}
		float subs(){
			return a-b;
		}
		float mul(){
			return a*b;
		}
		float div(){
			if (b==0){
			return 0;
			}
			else {
				return a/b;
			}
		}
		
};

int main(){
	int choice;
	calculator cal;//simple calculator object
	cout<<"Enter 1 for Addition";
	cout<<"\nEnter 2 for Substraction";
	cout<<"\nEnter 3 for Multiplication";
	cout<<"\nEnter 4 for Division";
	cout<<"\nEnter 0 to Exit";
	do {
		cout<<"\nEnter choice (1-4):";
		cin>>choice;
		switch (choice){
			case 1:
				cal.get();
				cout<<"Answer:"<<cal.add();
				break;
				case 2:
					cal.get();
					cout<<"Answer:"<<cal.subs();
					break;
					case 3:
						cal.get();
						cout<<"Answer:"<<cal.mul();
						break;
						case 4:
							cal.get();
							cout<<"Answer:"<<cal.div();
							break;
							default:
								cout<<"Invalid input";
		}
	}
	while (choice>=1&&choice<=4);
	return 0;
}

