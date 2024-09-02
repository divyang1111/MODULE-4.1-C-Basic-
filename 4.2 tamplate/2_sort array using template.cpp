// Write a program of to sort the array using templates. 
#include <iostream>
using namespace std;


template <typename T>
void swap(T& a, T& b) 
{
    T temp = a;
    a = b;
    b = temp;
}


template <typename T>
void bubbleSort(T arr[], int size) 
{
    for (int i = 0; i < size - 1; ++i) 
	{
        for (int j = 0; j < size - i - 1; ++j) 
		{
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1);
            }
        }
    }
}


template <typename T>
void printArray(const T arr[], int size) 
{
    for (int i = 0; i < size; ++i) 
	{
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() 
{
    
    int intArray[] = {64, 34, 25, 12, 22, 11, 90};
    int intSize = sizeof(intArray) / sizeof(intArray[0]);

    cout << "Integer array before sorting: ";
    printArray(intArray, intSize);

    bubbleSort(intArray, intSize);

    cout << "Integer array after sorting: ";
    printArray(intArray, intSize);

   
    double doubleArray[] = {64.5, 34.1, 25.7, 12.8, 22.3, 11.9, 90.6};
    int doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);

    cout << "Double array before sorting: ";
    printArray(doubleArray, doubleSize);

    bubbleSort(doubleArray, doubleSize);

    cout << "Double array after sorting: ";
    printArray(doubleArray, doubleSize);

    return 0;
}

