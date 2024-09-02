// Assume that the test results of a batch of students are stored in three different 
// classes. Class Students are storing the roll number. Class Test stores the marks 
// obtained in two subjects and class result contains the total marks obtained in 
// the test. The class result can inherit the details of the marks obtained in the 
// test and roll number of students. (Multilevel Inheritance)
#include <iostream>
using namespace std;


class Student 
{
protected:
    int rollNumber;

public:
    
    void inputRollNumber() 
	{
        cout << "Enter roll number: ";
        cin >> rollNumber;
    }

    
    void displayRollNumber() 
	{
        cout << "Roll Number: " << rollNumber << endl;
    }
};


class Test : public Student 
{
protected:
    float subject1;
    float subject2;

public:
   
    void inputMarks() 
	{
        cout << "Enter marks for Subject 1: ";
        cin >> subject1;
        cout << "Enter marks for Subject 2: ";
        cin >> subject2;
    }

    
    void displayMarks() 
	{
        cout << "Marks in Subject 1: " << subject1 << endl;
        cout << "Marks in Subject 2: " << subject2 << endl;
    }
};


class Result : public Test 
{
private:
    float totalMarks;

public:
    
    void calculateTotal() 
	{
        totalMarks = subject1 + subject2;
    }

    
    void displayResult() 
	{
        displayRollNumber();
        displayMarks();
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() 
{
    Result studentResult;

    
    studentResult.inputRollNumber();
    studentResult.inputMarks();

   
    studentResult.calculateTotal();
    studentResult.displayResult();

    return 0;
}
 
