/* Write a program for Mathematical operations like Addition, Subtraction, Multiplication, Division 
of two number using different parameters and Function Overloading */

#include<iostream>
using namespace std;

class operation{
public:
    int operate(int a,int b,char op){
        switch (op){
            case '+':return a + b; // Addition operation
            case '-':return a - b; // Subtraction operation
            case '*':return a * b; // Multiplication operation
            case '/':
                if (b != 0){
                    return a / b; // Division operation
                } else {
                    cout<<"Division by zero is 0."<<endl;
                    return 0;
                }
            default:
                cout<<"Invalid operator entered!"<<endl;
                return 0;
        }
    }
};

int main() {
    float a,b,result;
    char op;
    operation obj;

    cout<<"Enter values:"; // Enter operation values: number 1-->(+,-,*,/)-->number 2
    cin>>a>>op>>b;

    result=obj.operate(a,b,op);

    cout<<"Answer: "<<result<<endl; // Display answer
    return 0;
}
