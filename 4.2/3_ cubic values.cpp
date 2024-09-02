// Write a program to find the multiplication values and the cubic values using inline function 
#include <iostream>
using namespace std;


inline int multiply(int x, int y) 
{
    return x * y;
}


inline int cubic(int x) 
{
    return x * x * x;
}

int main() {
    int num1, num2;
    
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;

    
    int product = multiply(num1, num2);
    cout << "Multiplication of " << num1 << " and " << num2 << " is: " << product << endl;

    
    int cube = cubic(num1);
    cout << "Cubic value of " << num1 << " is: " << cube << endl;

    return 0;
}
 
