// Write a program of to swap the two values using templates 
#include <iostream>
using namespace std;


template <typename T>
void swapValues(T& a, T& b) 
{
    T temp = a;
    a = b;
    b = temp;
}

int main() 
{
    
    int x = 10, y = 20;
    cout << "Before swapping (integers): x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After swapping (integers): x = " << x << ", y = " << y << endl;

    
    double m = 1.5, n = 2.5;
    cout << "Before swapping (doubles): m = " << m << ", n = " << n << endl;
    swapValues(m, n);
    cout << "After swapping (doubles): m = " << m << ", n = " << n << endl;

    
    char p = 'A', q = 'B';
    cout << "Before swapping (characters): p = " << p << ", q = " << q << endl;
    swapValues(p, q);
    cout << "After swapping (characters): p = " << p << ", q = " << q << endl;

    return 0;
}

