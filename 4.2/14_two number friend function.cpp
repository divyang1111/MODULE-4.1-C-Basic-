// Write a program to find the max number from given two numbers using 
// friend function
#include <iostream>
using namespace std;

class MaxFinder 
{
private:
    int a, b;

public:
    
    MaxFinder(int x, int y) : a(x), b(y) {}

    
    friend int findMax(const MaxFinder&);

    
    void display() const 
	{
        cout << "a: " << a << ", b: " << b << endl;
    }
};


int findMax(const MaxFinder& mf) 
{
    return (mf.a > mf.b) ? mf.a : mf.b;
}

int main() 
{
    
    MaxFinder mf(10, 20);

   
    cout << "Numbers:" << endl;
    mf.display();

    
    cout << "Maximum number: " << findMax(mf) << endl;

    return 0;
}
  
