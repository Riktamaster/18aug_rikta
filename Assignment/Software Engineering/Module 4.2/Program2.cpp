/*WAP to Define a class to represent a bank account. Include the following members:
1. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
2. Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance                        */

#include<iostream>
using namespace std;
class bank{
	
	int bank_account;
	char name[50],account_type[100];
	float balance,deposit_amt,withdraw_amt;

public:
	//To get user's details
	void get_details(){
		cout << "Enter Depositor's name: ";
        cin >> name;
        cout << "Enter Account number: ";
        cin >> bank_account;
        cout << "Enter Account type: ";
        cin >> account_type;
        cout << "Enter Balance: ";
        cin >> balance;
	}
	//To display details recieved from user
	void display_details(){
	
	cout<<"\nEnter name of depositor:"<<name;
	cout<<"\nEnter Account number:"<<bank_account;
	cout<<"\nEnter Account type:"<<account_type;
	cout<<"\nBalance:"<<balance;}
	//To deposit amount
	void deposit(){
		int depoist_amt;
		cout<<"Enter Deposit amount:";
		cin>>deposit_amt;
		balance+=deposit_amt;
	}
	//To withdraw amount
	void withdraw(){
		int withdraw_amt;
		cout<<"Enter Withdraw amount:";
		cin>>withdraw_amt;
		if (withdraw_amt>balance){
			cout<<"Insufficient balance! Cannot withdraw amount.";
		}
		else {
			balance-=withdraw_amt;
		}
	}
};

int main(){
	bank b1;//object created
	b1.get_details();//calling member function
	b1.deposit();//calling member function
	b1.withdraw();//calling member function
	cout << "\nDetails of the account:";
    cout << "\n-----------------------";
	b1.display_details();//calling member function
	return 0;
	
}

