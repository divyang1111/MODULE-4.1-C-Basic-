// Write a program of Addition, Subtraction, Division, Multiplication using constructor.  
#include <iostream>
using namespace std;

class Calculator 
{
private:
    double num1, num2;

public:
   
    Calculator(double x, double y) 
	{
        num1 = x;
        num2 = y;
    }

    
    double add() 
	{
        return num1 + num2;
    }

   
    double subtract() 
	{
        return num1 - num2;
    }

    
    double multiply() 
	{
        return num1 * num2;
    }

    
    double divide() 
	{
        if (num2 == 0) 
		{
            cout << "Error! Division by zero." << endl;
            return 0;
        }
        return num1 / num2;
    }
};

int main() 
{
    double a, b;

    // User input for two numbers
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    
    Calculator calc(a, b);

    
    cout << "Addition: " << calc.add() << endl;
    cout << "Subtraction: " << calc.subtract() << endl;
    cout << "Multiplication: " << calc.multiply() << endl;
    cout << "Division: " << calc.divide() << endl;

    return 0;
}

