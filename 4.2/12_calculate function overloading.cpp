// Write a program to calculate the area of circle, rectangle and triangle using 
// Function Overloading   
// Rectangle: Area * breadth   
// Triangle: ½ *Area* breadth  
// Circle: Pi * Area *Area 
#include <iostream>
#include <cmath>  
using namespace std;




double calculateArea(double radius) 
{
    return M_PI * radius * radius; 
}


double calculateArea(double length, double breadth) 
{
    return length * breadth;
}


double calculateArea(double base, double height, bool isTriangle) 
{
    if (isTriangle) 
	{
        return 0.5 * base * height;
    }
    return 0; 
}

int main() 
{
    
    double radius, length, breadth, base, height;

   
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << calculateArea(radius) << endl;

    
    cout << "Enter the length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Area of the rectangle: " << calculateArea(length, breadth) << endl;

    
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of the triangle: " << calculateArea(base, height, true) << endl;

    return 0;
}

