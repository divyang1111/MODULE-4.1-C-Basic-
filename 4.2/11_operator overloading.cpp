// Write a program to concatenate the two strings using Operator Overloading  
#include <iostream>
#include <string>
using namespace std;

class String 
{
private:
    string str;

public:
    
    String() : str("") {}

    
    String(string s) : str(s) {}

    
    void inputString() 
	{
        cout << "Enter a string: ";
        cin >> str;
    }

    
    void displayString() const 
	{
        cout << "String: " << str << endl;
    }

   
    String operator+(const String& s) 
	{
        return String(str + s.str);
    }
};

int main() 
{
   
    String str1, str2;

   
    cout << "String 1:" << endl;
    str1.inputString();
    
    cout << "String 2:" << endl;
    str2.inputString();

    
    String result = str1 + str2;

   
    cout << "Concatenated String:" << endl;
    result.displayString();

    return 0;
}

