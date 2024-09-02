// Write a program to swap the two numbers using friend function without 
// using third variable
#include <iostream>
using namespace std;

class Swapper 
{
private:
    int a, b;

public:
    
    Swapper(int x, int y) : a(x), b(y) {}

   
    friend void swapNumbers(Swapper&);

    
    void display() const 
	{
        cout << "a: " << a << ", b: " << b << endl;
    }
};


void swapNumbers(Swapper& s) 
{
    
    s.a = s.a + s.b; 
    s.b = s.a - s.b; 
    s.a = s.a - s.b; 
}

int main() 
{
   
    Swapper s(10, 20);

    
    cout << "Before swapping:" << endl;
    s.display();

    
    swapNumbers(s);

   
    cout << "After swapping:" << endl;
    s.display();

    return 0;
}
 
