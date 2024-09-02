// WAP to create simple calculator using class 
#include <iostream>
using namespace std;

class Calculator 
{
private:
    double num1, num2;

public:
   
    Calculator(double a = 0, double b = 0) : num1(a), num2(b) {}

    
    void setNumbers(double a, double b) 
	{
        num1 = a;
        num2 = b;
    }

    
    double add() const 
	{
        return num1 + num2;
    }

   
    double subtract() const 
	{
        return num1 - num2;
    }

   
    double multiply() const 
	{
        return num1 * num2;
    }

    
    double divide() const 
	{
        if (num2 != 0) 
		{
            return num1 / num2;
        } else 
		{
            cout << "Error: Division by zero!" << endl;
            return 0; // Return 0 or handle error as needed
        }
    }
};

int main() 
{
    
    Calculator calc;

    
    double a, b;
    int choice;

    cout << "Simple Calculator" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    
    calc.setNumbers(a, b);

   
    switch (choice) 
	{
        case 1:
            cout << "Result of addition: " << calc.add() << endl;
            break;
        case 2:
            cout << "Result of subtraction: " << calc.subtract() << endl;
            break;
        case 3:
            cout << "Result of multiplication: " << calc.multiply() << endl;
            break;
        case 4:
            cout << "Result of division: " << calc.divide() << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}

