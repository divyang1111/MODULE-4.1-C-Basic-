// Write a Program of Two 1D Matrix Addition using Operator Overloading 
#include <iostream>
using namespace std;

class Matrix 
{
private:
    int size;
    int* elements;

public:
    
    Matrix(int s) : size(s) 
	{
        elements = new int[size];
    }

    
    ~Matrix() 
	{
        delete[] elements;
    }

  
    void inputElements() 
	{
        cout << "Enter elements of the matrix:" << endl;
        for (int i = 0; i < size; ++i) 
		{
            cin >> elements[i];
        }
    }

    
    void displayElements() const 
	{
        cout << "Matrix elements are: ";
        for (int i = 0; i < size; ++i) 
		{
            cout << elements[i] << " ";
        }
        cout << endl;
    }

    
    Matrix operator+(const Matrix& m) 
	{
        Matrix result(size);
        for (int i = 0; i < size; ++i) 
		{
            result.elements[i] = this->elements[i] + m.elements[i];
        }
        return result;
    }
};

int main() 
{
    int size;
    cout << "Enter the size of the matrix: ";
    cin >> size;

   
    Matrix mat1(size);
    Matrix mat2(size);

    
    cout << "Matrix 1:" << endl;
    mat1.inputElements();

    
    cout << "Matrix 2:" << endl;
    mat2.inputElements();

    
    Matrix result = mat1 + mat2;

    
    cout << "Resultant Matrix after addition:" << endl;
    result.displayElements();

    return 0;
}

