/* Write a program for Mathematical operations like Addition, Subtraction, Multiplication, Division 
of two number using different parameters and Function Overloading */

#include<iostream>
using namespace std;

class operation {
public:
    int cal(int a, int b) {
        return a + b;
    }

    double cal(double a, double b) {
        return a - b;
    }

    float cal(float a, float b) {
        return a * b;
    }

    float cal(float a, int b) {
        if (b != 0) {
            return a / b;
        } else {
            return 0;
        }
    }
};

int main() {
    float a,b;
    float result;  // Change the result type to float
    char op;
    operation obj;

    cout << "Enter values:"; // Enter operation values: number 1 number 2 operator
    cin >> a >> op >> b;

    switch (op) {
        case '+':
            result = obj.cal(a, b); // Addition operation
            break;
        case '-':
            result = obj.cal(a, b); // Subtraction operation
            break;
        case '*':
            result = obj.cal(a, b); // Multiplication operation
            break;
        case '/':
            result = obj.cal(a, b); // Division operation
            break;
        default:
            cout << "Invalid operator entered!";
            return 0;
    }

    cout << "Answer: " << result; // Display answer
    return 0;
}

