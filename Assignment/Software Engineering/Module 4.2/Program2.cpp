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

class bank {
    int bank_account;
    char name[50],account_type[100];
    float balance,deposit_amt,withdraw_amt,total_balance;

public:
    // To get user's details
    void get_details(){
        cout<<"Enter Depositor's name: ";
        cin>>name;
        cout<<"Enter Account number: ";
        cin>>bank_account;
        cout<<"Enter Account type: ";
        cin>>account_type;
        cout<<"Enter Balance: ";
        cin>>balance;
        total_balance=balance; // Initialize total_balance
    }
    // To display details received from the user
    void display_details() {
        cout << "\nName of depositor:" << name;
        cout << "\nAccount number:" << bank_account;
        cout << "\nAccount type:" << account_type;
        cout << "\nBalance:" << balance;
        cout << "\nTotal Balance:" << total_balance;
    }
    // To deposit amount
    void deposit() {
        cout << "Enter Deposit amount:";
        cin >> deposit_amt;
        balance += deposit_amt;
        total_balance += deposit_amt;
        cout << "Amount deposited successfully!";
    }
    // To withdraw amount
    void withdraw(){
        cout<<"Enter Withdraw amount:";
        cin>>withdraw_amt;
        if (withdraw_amt > balance){
            cout<<"Insufficient balance! Cannot withdraw amount.";
        }
        else {
            balance -= withdraw_amt;
            total_balance -= withdraw_amt;
            cout<<"Amount withdrawn successfully!";
        }
    }

    // To check balance
    float get_balance(){ // Added a public function to access balance
        return balance;
    }

    // To check total balance
    float get_total_balance(){ // Added a public function to access total_balance
        return total_balance;
    }
};

int main() {
    bank b1; // object created
    int choice;
    char continue_transaction;
    b1.get_details();
    
    cout << "\nDetails of the account:";
        cout << "\n-----------------------";
        b1.display_details();
    
    do {
    	cout<<"\n--------------------";
        cout << "\nBanking System\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Balance\n";
        cout << "4. Log Out\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
        b1.deposit();
            break;
        case 2:
            b1.withdraw();
            break;
        case 3:
            cout << "Current Balance: " << b1.get_balance() << endl;
            break;
        case 4:
            cout << "Logging out...\n";
            return 0;
        default:
            cout << "Invalid choice\n";
            continue;
        }
        cout << "\nDo you want to continue the transaction? (Y/N): ";
        cin >> continue_transaction;
        
        // Display and update balance after each transaction
        cout << "\nUpdated Total Balance: " << b1.get_total_balance() << endl;

    } while (continue_transaction == 'Y' || continue_transaction == 'y');

    return 0;
}
