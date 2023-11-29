//Write a program to concatenate the two strings using Operator Overloading//

#include<iostream>
#include<string.h>
using namespace std;

class con_string{
	public:
		char str[100];
		void get_string(){
			cout<<"Enter string:";
			cin>>str;
		}
		void display_string(){
			cout<<str;
		}
		
		con_string operator+(con_string &s2){
			con_string s3;
			strcpy(s3.str,str);
			strcat(s3.str,s2.str);
			return s3;
		}
		
};

int main(){
	con_string s1,s2,s3;
	s1.get_string();
	s2.get_string();
	
	cout<<"-----------------------------"<<endl;
	cout<<"First string:";
	s1.display_string();
	cout<<endl;
	cout<<"Second string:";
	s2.display_string();
	cout<<endl;
	cout<<"-----------------------------"<<endl;
	s3=s1+s2;
	cout<<"Concatenated string:";
	s3.display_string();
	cout<<endl;
	
	return 0;
}
