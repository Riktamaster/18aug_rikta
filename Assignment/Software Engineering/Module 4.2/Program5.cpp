/* Assume a class cricketer is declared. Declare a derived class batsman from cricketer. 
Data member of batsman. Total runs, Average runs and best performance. 
Member functions:input data, calculate average runs, Display data. (Single Inheritance) */

#include<iostream>
using namespace std;
class cricketer{

	int age;
	string name;
	
	public:
	void get_data(){
		cout<<"Enter Cricketer's name:";
		cin>>name;
		cout<<"Enter Cricketer's age:";
		cin>>age;
	}
	void display_data(){
		cout<<"\nCricketer's name:"<<name;
		cout<<"\nCricketer's age:"<<age<<"years";
	}
		
};

class batsman:public cricketer{
	
	int total_runs,best_performance;
	int average_runs;
	
	public:
	
	void get_data_batsman(){
		get_data();
		cout<<"Enter total runs:";
		cin>>total_runs;
		cout<<"Enter best performance:";
		cin>>best_performance;
	}
	
	void calculate_average_runs(){
		if (best_performance>0){
			average_runs=total_runs/best_performance;
		}
		else {
			average_runs=0;
		}
	}
	
	void display_data_batsman(){
		display_data();
		cout<<"\nTotal runs:"<<total_runs;
		cout<<"\nAverage runs:"<<average_runs;
		cout<<"\nBest performance:"<<best_performance;
	}
	
};

int main(){
	batsman b1;
	b1.get_data_batsman();
	b1.calculate_average_runs();
	b1.display_data_batsman();
	return 0;
}
