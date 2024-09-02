// Write a program to Mathematic operation like Addition, Subtraction, 
// Multiplication, Division Of two number using different parameters and 
// Function Overloading
#include <iostream>
using namespace std;

class MathOperations 
{
public:
    
    int operate(int a, int b) 
	{
        return a + b;
    }

    
    int operate(int a, int b, char op) 
	{
        if (op == '-') {
            return a - b;
        }
        return 0;
    }

    
    double operate(double a, double b) 
	{
        return a * b;
    }

   
    double operate(double a, double b, char op) 
	{
        if (op == '/') 
		{
            if (b == 0) 
			{
                cout << "Error! Division by zero." << endl;
                return 0;
            }
            return a / b;
        }
        return 0;
    }
};

int main() 
{
    MathOperations math;

    
    int intAdd = math.operate(10, 5);
    cout << "Addition of 10 and 5: " << intAdd << endl;

    
    int intSub = math.operate(10, 5, '-');
    cout << "Subtraction of 10 and 5: " << intSub << endl;

   
    double doubleMul = math.operate(5.5, 2.5);
    cout << "Multiplication of 5.5 and 2.5: " << doubleMul << endl;

    
    double doubleDiv = math.operate(5.5, 2.5, '/');
    cout << "Division of 5.5 by 2.5: " << doubleDiv << endl;

    return 0;
}

